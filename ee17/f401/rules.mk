# MCU name
MCU = STM32F401

# Address of the bootloader in system memory
STM32_BOOTLOADER_ADDRESS = 0x1FFF0000

# Bootloader selection
BOOTLOADER = stm32-dfu
ENCODER_ENABLE = no
# # project specific file
#CUSTOM_MATRIX = lite    # for using the A9 pin as matrix io
#QUANTUM_SRC += matrix.c
# RGB_MATRIX_ENABLE = yes
# RGB_MATRIX_DRIVER = WS2812
#RGB_MATRIX_ENABLE = yes
#RGB_MATRIX_DRIVER = IS31FL3733
OLED_ENABLE = yes
#OLED_DRIVER = SH1106
#IS31FL3733_DRIVER = i2c
#WS2812_DRIVER = pwm
# EEPROM_DRIVER = spi
#BACKLIGHT_ENABLE = yes      # Enable keyboard backlight functionality
#BACKLIGHT_DRIVER = software
#EEPROM_DRIVER = custom
#SRC += eep/eeprom_stm32.c
#SRC += eep/flash_stm32.c
#OPT_DEFS += -DEEPROM_EMU_STM32F401xC
#COMMON_VPATH += keyboards/yandrstudio/whiteMouse28T/f401/eep
