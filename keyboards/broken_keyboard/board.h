
#pragma once

#include_next <board.h>

#define BOARD_OTG_NOVBUSSENS 1 // required to ignore usb otg
#undef STM32_HSE_BYPASS // required to use the onboard clock (the board its based on skips it)

#define STM32F412xE
