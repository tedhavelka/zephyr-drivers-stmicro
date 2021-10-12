/**
 * @project Kionix Sensor Drivers
 * @author Ted Havelka
 * @license Apache 2.0 licensed.
 */

#define DT_DRV_COMPAT stmicro_iis2dh

#include <math.h>
#include <device.h>
#include <drivers/i2c.h>
#include <drivers/sensor.h>
#include "iis2dh.h"
#include "out-of-tree-drivers.h"
#include "development-defines.h"

#include <logging/log.h>
LOG_MODULE_REGISTER(iis2dh, CONFIG_SENSOR_LOG_LEVEL);
