#
# Copyright (c) 2021 Neela Nurseries
# For "common directory" see https://github.com/circuitdojo/air-quality-wing-zephyr-drivers/blob/main/drivers/CMakeLists.txt
#

# Subdirectories
add_subdirectory_ifdef(CONFIG_IIS2DH iis2dh)
