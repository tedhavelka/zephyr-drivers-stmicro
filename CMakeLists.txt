#
# Copyright (c) 2021 Neela Nurseries
#

# Point to this project's root directory.
set(STMICRO_DRIVERS_WORK_DIR ${CMAKE_CURRENT_LIST_DIR} CACHE PATH "STMicro drivers work root directory")

# Subdirectories
add_subdirectory(drivers)
# add_subdirectory_ifdef(CONFIG_IIS2DH lib)  . . . 'lib' directory not yet created in this project - TMH

# Include headers
# zephyr_include_directories(include)            . . . also not yet created - TMH
zephyr_include_directories(drivers)
zephyr_include_directories(drivers/stmicro/iis2dh)
