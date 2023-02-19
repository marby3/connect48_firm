// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

/*******************************************************************************
  88888888888 888      d8b                .d888 d8b 888               d8b
      888     888      Y8P               d88P"  Y8P 888               Y8P
      888     888                        888        888
      888     88888b.  888 .d8888b       888888 888 888  .d88b.       888 .d8888b
      888     888 "88b 888 88K           888    888 888 d8P  Y8b      888 88K
      888     888  888 888 "Y8888b.      888    888 888 88888888      888 "Y8888b.
      888     888  888 888      X88      888    888 888 Y8b.          888      X88
      888     888  888 888  88888P'      888    888 888  "Y8888       888  88888P'
                                                        888                 888
                                                        888                 888
                                                        888                 888
     .d88b.   .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d88b.   .d88888
    d88P"88b d8P  Y8b 888 "88b d8P  Y8b 888P"      "88b 888   d8P  Y8b d88" 888
    888  888 88888888 888  888 88888888 888    .d888888 888   88888888 888  888
    Y88b 888 Y8b.     888  888 Y8b.     888    888  888 Y88b. Y8b.     Y88b 888
     "Y88888  "Y8888  888  888  "Y8888  888    "Y888888  "Y888 "Y8888   "Y88888
         888
    Y8b d88P
     "Y88P"
*******************************************************************************/

#pragma once

#ifndef DEVICE_VER
#   define DEVICE_VER 0x0100
#endif // DEVICE_VER

#ifndef DIODE_DIRECTION
#   define DIODE_DIRECTION COL2ROW
#endif // DIODE_DIRECTION

#ifndef MANUFACTURER
#   define MANUFACTURER marby3
#endif // MANUFACTURER

#ifndef MATRIX_IO_DELAY
#   define MATRIX_IO_DELAY 20
#endif // MATRIX_IO_DELAY

#ifndef RGB_DI_PIN
#   define RGB_DI_PIN GP0
#endif // RGB_DI_PIN

#ifndef RGBLED_NUM
#   define RGBLED_NUM 96
#endif // RGBLED_NUM

#ifndef PRODUCT
#   define PRODUCT connect48
#endif // PRODUCT

#ifndef PRODUCT_ID
#   define PRODUCT_ID 0x0412
#endif // PRODUCT_ID

#ifndef VENDOR_ID
#   define VENDOR_ID 0xC048
#endif // VENDOR_ID

#ifndef MATRIX_COLS
#   define MATRIX_COLS 12
#endif // MATRIX_COLS

#ifndef MATRIX_ROWS
#   define MATRIX_ROWS 8
#endif // MATRIX_ROWS


#ifndef MATRIX_COL_PINS
#   define MATRIX_COL_PINS { GP6, GP7, GP11, GP12, GP13, GP17, GP16, GP18, GP19, GP20, GP21, GP22 }
#endif // MATRIX_COL_PINS


#ifndef MATRIX_ROW_PINS
#   define MATRIX_ROW_PINS { GP4, GP3, GP1, GP0 }
#endif // MATRIX_ROW_PINS

