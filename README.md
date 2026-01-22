# STM32 4x4 Matrix Keypad Scanner (Bare-Metal)

This project implements a **4x4 matrix keypad scanner** on an STM32 microcontroller using **direct register access** (bare-metal, no HAL or LL libraries).

The keypad is scanned by configuring the rows as GPIO outputs and the columns as GPIO inputs with internal pull-up resistors. Each row is driven low sequentially while the column inputs are sampled to determine which key is pressed. Basic software debouncing and key release detection are included.

---

## Schematic

A standard 4x4 matrix keypad wiring is used. The schematic below illustrates the row/column structure of the keypad:

![4x4 Keypad Schematic](https://www.circuitbasics.com/wp-content/uploads/2017/05/Arduino-Keypad-Tutorial-4X4-Keypad-Schematic.png)

This matrix approach allows **16 keys to be read using only 8 GPIO pins**.

---

## Features

- 4x4 matrix keypad scanning
- Bare-metal GPIO control (direct register access)
- Software debouncing
- Key press and key release detection
- UART output using `printf` for debugging
- No HAL / no external libraries

---

## Hardware Configuration

### GPIO Pin Mapping

| Function | GPIO Port | Pin | Description |
|--------|----------|-----|-------------|
| Row 1 | GPIOC | 9 | Output (active LOW) |
| Row 2 | GPIOC | 8 | Output (active LOW) |
| Row 3 | GPIOC | 6 | Output (active LOW) |
| Row 4 | GPIOB | 8 | Output (active LOW) |
| Column 1 | GPIOC | 5 | Input with pull-up |
| Column 2 | GPIOB | 9 | Input with pull-up |
| Column 3 | GPIOA | 12 | Input with pull-up |
| Column 4 | GPIOA | 5 | Input with pull-up |

> Note: Pin assignments can be changed depending on the STM32 device and board layout.

---

## Keypad Layout

The following character mapping is used:

```
1  2  3  A
4  5  6  B
7  8  9  C
*  0  #  D
```

---

## Scanning Logic Overview

1. All rows are driven HIGH (idle state).
2. One row is pulled LOW at a time.
3. Column inputs are read to detect a pressed key.
4. A debounce delay is applied to confirm the key press.
5. The corresponding key character is determined using the row/column index.
6. The system waits until the key is released before continuing the scan.
7. The process repeats continuously.

---

## Usage

1. Open the project in **STM32CubeIDE**.
2. Ensure a UART peripheral is configured for `printf` output.
3. Build and flash the firmware to the STM32 microcontroller.
4. Open a serial terminal.
5. Press keys on the keypad to see detected characters printed to the console.

---

## Example Output

```
Scan started.
Key: 5 (row=1, col=2)
Key: A (row=0, col=4)
```

---

## Notes

- All delays are implemented using busy-wait loops and depend on the CPU clock frequency.
- Timing values may require adjustment depending on the system clock.
- This project is intended for **educational purposes and low-level embedded development**.

---

## License

This project is provided **AS-IS** under the license included in the repository.  
No warranty is provided; use at your own risk.
