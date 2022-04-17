# --- MCU Configuration ---
# Cortex version
MCU = cortex-m0plus

# ARM version, CORTEX-M0/M1 are 6, CORTEX-M3/M4/M7 are 7
ARMV = 6

## chip/board settings
# - the next two should match the directories in
#   <chibios>/os/hal/ports/$(MCU_FAMILY)/$(MCU_SERIES)
MCU_FAMILY = STM32
MCU_SERIES = STM32L0xx

# Linker script to use
# - it should exist either in <chibios>/os/common/startup/ARMCMx/compilers/GCC/ld/
#   or <keyboard_dir>/ld/
MCU_LDSCRIPT ?= STM32L053x8

# Startup code to use
#  - it should exist in <chibios>/os/common/startup/ARMCMx/compilers/GCC/mk/
MCU_STARTUP ?= stm32l0xx

# Board: it should exist either in <chibios>/os/hal/boards/,
# <keyboard_dir>/boards/, or drivers/boards/
BOARD ?= ST_NUCLEO64_L053R8

USE_FPU ?= no

# UF2 settings
UF2_FAMILY ?= STM32L0

# Stack sizes: Since this chip has limited RAM capacity, the stack area needs to be reduced.
# This ensures that the EEPROM page buffer fits into RAM
#USE_PROCESS_STACKSIZE = 0x600
#USE_EXCEPTIONS_STACKSIZE = 0x300

# Bootloader address for STM32 DFU
STM32_BOOTLOADER_ADDRESS ?= 0x1FF00000

# Bootloader selection
BOOTLOADER = stm32-dfu