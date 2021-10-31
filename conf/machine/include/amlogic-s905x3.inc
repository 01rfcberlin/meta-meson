# Amlogic S905X3 Configurations

require conf/machine/include/tune-cortexa55.inc
require conf/machine/include/amlogic-meson64.inc
DEFAULTTUNE = "armv8a-crc-crypto"
MACHINE_FEATURES = "serial usbhost sdio screen wifi"

SOC_FAMILY:append = ":meson-sm1"
