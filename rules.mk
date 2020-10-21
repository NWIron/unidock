# MCU name
MCU = atmega32u4

# LUFA specific
# Target architecture (see library "Board Types" documentation).
ARCH = AVR8

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
BOOTLOADER = atmel-dfu

# Build Options
EXTRAKEY_ENABLE 	= yes
NKRO_ENABLE 		= yes
CONSOLE_ENABLE		= yes
COMMAND_ENABLE		= yes

# Enable Encoders
ENCODER_ENABLE      = yes

