/*
 * main.h
 *
 *  Created on: Jan 8, 2026
 *      Author: mariolulic
 */

#ifndef MAIN_H_
#define MAIN_H_


#include <stdint.h>
#include <stdio.h>

typedef struct
{
	uint32_t gpioA_EN:1;
	uint32_t gpioB_EN:1;
	uint32_t gpioC_EN:1;
	uint32_t gpioD_EN:1;
	uint32_t gpioE_EN:1;
	uint32_t gpioF_EN:1;
	uint32_t gpioG_EN:1;
	uint32_t gpioH_EN:1;
	uint32_t gpioI_EN:1;
	uint32_t reserved1:3;
	uint32_t CRC_EN:1;
	uint32_t reserved2:5;
	uint32_t BKPSRAM_EN:1;
	uint32_t res:1;
	uint32_t CCMDATARAM_EN:1;
	uint32_t DMA1_EN:1;
	uint32_t DMA2_EN:1;
	uint32_t reserved3:2;
	uint32_t ETHMAC_EN:1;
	uint32_t ETHMACTX_EN:1;
	uint32_t ETHMACPTP_EN:1;
	uint32_t OTGHS_EN:1;
	uint32_t OTGHSULPI_EN:1;
	uint32_t reserved4:1;

} RCC_AHB1ENR_t;

typedef struct
{
    uint32_t pin_0  : 2;
    uint32_t pin_1  : 2;
    uint32_t pin_2  : 2;
    uint32_t pin_3  : 2;
    uint32_t pin_4  : 2;
    uint32_t pin_5  : 2;
    uint32_t pin_6  : 2;
    uint32_t pin_7  : 2;
    uint32_t pin_8  : 2;
    uint32_t pin_9  : 2;
    uint32_t pin_10 : 2;
    uint32_t pin_11 : 2;
    uint32_t pin_12 : 2;
    uint32_t pin_13 : 2;
    uint32_t pin_14 : 2;
    uint32_t pin_15 : 2;
} GPIOX_MODER_t;

typedef struct
{
    uint32_t set_0  : 1;
    uint32_t set_1  : 1;
    uint32_t set_2  : 1;
    uint32_t set_3  : 1;
    uint32_t set_4  : 1;
    uint32_t set_5  : 1;
    uint32_t set_6  : 1;
    uint32_t set_7  : 1;
    uint32_t set_8  : 1;
    uint32_t set_9  : 1;
    uint32_t set_10 : 1;
    uint32_t set_11 : 1;
    uint32_t set_12 : 1;
    uint32_t set_13 : 1;
    uint32_t set_14 : 1;
    uint32_t set_15 : 1;

    uint32_t rst_0  : 1;
    uint32_t rst_1  : 1;
    uint32_t rst_2  : 1;
    uint32_t rst_3  : 1;
    uint32_t rst_4  : 1;
    uint32_t rst_5  : 1;
    uint32_t rst_6  : 1;
    uint32_t rst_7  : 1;
    uint32_t rst_8  : 1;
    uint32_t rst_9  : 1;
    uint32_t rst_10 : 1;
    uint32_t rst_11 : 1;
    uint32_t rst_12 : 1;
    uint32_t rst_13 : 1;
    uint32_t rst_14 : 1;
    uint32_t rst_15 : 1;
} GPIOX_BSRR_t;

typedef struct
{
    uint32_t pin_0  : 1;
    uint32_t pin_1  : 1;
    uint32_t pin_2  : 1;
    uint32_t pin_3  : 1;
    uint32_t pin_4  : 1;
    uint32_t pin_5  : 1;
    uint32_t pin_6  : 1;
    uint32_t pin_7  : 1;
    uint32_t pin_8  : 1;
    uint32_t pin_9  : 1;
    uint32_t pin_10 : 1;
    uint32_t pin_11 : 1;
    uint32_t pin_12 : 1;
    uint32_t pin_13 : 1;
    uint32_t pin_14 : 1;
    uint32_t pin_15 : 1;
    uint32_t reserved : 16;
} GPIOX_IDR_t;

typedef struct
{
    uint32_t pin_0  : 2;
    uint32_t pin_1  : 2;
    uint32_t pin_2  : 2;
    uint32_t pin_3  : 2;
    uint32_t pin_4  : 2;
    uint32_t pin_5  : 2;
    uint32_t pin_6  : 2;
    uint32_t pin_7  : 2;
    uint32_t pin_8  : 2;
    uint32_t pin_9  : 2;
    uint32_t pin_10 : 2;
    uint32_t pin_11 : 2;
    uint32_t pin_12 : 2;
    uint32_t pin_13 : 2;
    uint32_t pin_14 : 2;
    uint32_t pin_15 : 2;
} GPIOX_PUPDR_t;

typedef enum {
    COL_NONE = -1,
    COL_1 = 1,
    COL_2 = 2,
    COL_3 = 3,
    COL_4 = 4
} Column_t;


#endif /* MAIN_H_ */
