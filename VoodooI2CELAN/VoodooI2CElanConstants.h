//
//  LinuxELANI2C.h
//  VoodooI2CELAN
//
//  Ported from https://github.com/torvalds/linux/blob/master/drivers/input/mouse/elan_i2c_i2c.c
//  Licensed under GPL v2

#ifndef LinuxELANI2C_h
#define LinuxELANI2C_h


/* Elan i2c commands */
#define ETP_I2C_RESET 0x0100
#define ETP_I2C_WAKE_UP 0x0800
#define ETP_I2C_SLEEP 0x0801
#define ETP_I2C_DESC_CMD  0x0001
#define ETP_I2C_REPORT_DESC_CMD  0x0002
#define ETP_I2C_STAND_CMD  0x0005
#define ETP_I2C_UNIQUEID_CMD  0x0101
#define ETP_I2C_FW_VERSION_CMD  0x0102
#define ETP_I2C_SM_VERSION_CMD  0x0103
#define ETP_I2C_XY_TRACENUM_CMD  0x0105
#define ETP_I2C_MAX_X_AXIS_CMD  0x0106
#define ETP_I2C_MAX_Y_AXIS_CMD  0x0107
#define ETP_I2C_RESOLUTION_CMD  0x0108
#define ETP_I2C_PRESSURE_CMD  0x010A
#define ETP_I2C_IAP_VERSION_CMD  0x0110
#define ETP_I2C_SET_CMD   0x0300
#define ETP_I2C_POWER_CMD  0x0307
#define ETP_I2C_FW_CHECKSUM_CMD  0x030F
#define ETP_I2C_IAP_CTRL_CMD  0x0310
#define ETP_I2C_IAP_CMD   0x0311
#define ETP_I2C_IAP_RESET_CMD  0x0314
#define ETP_I2C_IAP_CHECKSUM_CMD 0x0315
#define ETP_I2C_CALIBRATE_CMD  0x0316
#define ETP_I2C_MAX_BASELINE_CMD 0x0317
#define ETP_I2C_MIN_BASELINE_CMD 0x0318

#define ETP_I2C_REPORT_LEN  34
#define ETP_I2C_DESC_LENGTH  30
#define ETP_I2C_REPORT_DESC_LENGTH 158
#define ETP_I2C_INF_LENGTH  2
#define ETP_I2C_IAP_PASSWORD  0x1EA5
#define ETP_I2C_IAP_RESET  0xF0F0
#define ETP_I2C_MAIN_MODE_ON  (1 << 9)
#define ETP_I2C_IAP_REG_L  0x01
#define ETP_I2C_IAP_REG_H  0x06

#define ETP_ENABLE_ABS  0x0001
#define ETP_ENABLE_CALIBRATE 0x0002
#define ETP_DISABLE_CALIBRATE 0x0000
#define ETP_DISABLE_POWER 0x0001
#define ETP_PRESSURE_OFFSET 25

#define ETP_MAX_PRESSURE 255
#define ETP_FWIDTH_REDUCE 90
#define ETP_FINGER_WIDTH 15
#define ETP_RETRY_COUNT  3

#define ETP_MAX_FINGERS  5
#define ETP_FINGER_DATA_LEN 5
#define ETP_REPORT_ID  0x5D
#define ETP_REPORT_ID_OFFSET 2
#define ETP_TOUCH_INFO_OFFSET 3
#define ETP_FINGER_DATA_OFFSET 4
#define ETP_HOVER_INFO_OFFSET 30
#define ETP_MAX_REPORT_LEN 34

#endif /* LinuxELANI2C_h */
