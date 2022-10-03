/* SPDX-License-Identifier: GPL-2.0-or-later */
/* Copyright (C) 2019 ROHM Semiconductors */

#ifndef __LINUX_MFD_BD71828_H__
#define __LINUX_MFD_BD71828_H__

#include <linux/mfd/rohm-generic.h>
#include <linux/mfd/rohm-shared.h>

/* Regulator IDs */
enum {
	BD71828_BUCK1,
	BD71828_BUCK2,
	BD71828_BUCK3,
	BD71828_BUCK4,
	BD71828_BUCK5,
	BD71828_BUCK6,
	BD71828_BUCK7,
	BD71828_LDO1,
	BD71828_LDO2,
	BD71828_LDO3,
	BD71828_LDO4,
	BD71828_LDO5,
	BD71828_LDO6,
	BD71828_LDO_SNVS,
	BD71828_REGULATOR_AMOUNT,
};

#define BD71828_BUCK1267_VOLTS		0xEF
#define BD71828_BUCK3_VOLTS		0x10
#define BD71828_BUCK4_VOLTS		0x20
#define BD71828_BUCK5_VOLTS		0x10
#define BD71828_LDO_VOLTS		0x32
/* LDO6 is fixed 1.8V voltage */
#define BD71828_LDO_6_VOLTAGE		1800000

/* Registers and masks*/

/* MODE control */
#define BD71828_REG_PS_CTRL_1		0x04
#define BD71828_REG_PS_CTRL_2		0x05
#define BD71828_REG_PS_CTRL_3		0x06

//#define BD71828_REG_SWRESET		0x06
#define BD71828_MASK_RUN_LVL_CTRL	0x30

/* Regulator control masks */

#define BD71828_MASK_RAMP_DELAY		0x6

#define BD71828_MASK_RUN_EN		0x08
#define BD71828_MASK_SUSP_EN		0x04
#define BD71828_MASK_IDLE_EN		0x02
#define BD71828_MASK_LPSR_EN		0x01

#define BD71828_MASK_RUN0_EN		0x01
#define BD71828_MASK_RUN1_EN		0x02
#define BD71828_MASK_RUN2_EN		0x04
#define BD71828_MASK_RUN3_EN		0x08

#define BD71828_MASK_DVS_BUCK1_CTRL	0x10
#define BD71828_DVS_BUCK1_CTRL_I2C	0
#define BD71828_DVS_BUCK1_USE_RUNLVL	0x10

#define BD71828_MASK_DVS_BUCK2_CTRL	0x20
#define BD71828_DVS_BUCK2_CTRL_I2C	0
#define BD71828_DVS_BUCK2_USE_RUNLVL	0x20

#define BD71828_MASK_DVS_BUCK6_CTRL	0x40
#define BD71828_DVS_BUCK6_CTRL_I2C	0
#define BD71828_DVS_BUCK6_USE_RUNLVL	0x40

#define BD71828_MASK_DVS_BUCK7_CTRL	0x80
#define BD71828_DVS_BUCK7_CTRL_I2C	0
#define BD71828_DVS_BUCK7_USE_RUNLVL	0x80

#define BD71828_MASK_BUCK1267_VOLT	0xff
#define BD71828_MASK_BUCK3_VOLT		0x1f
#define BD71828_MASK_BUCK4_VOLT		0x3f
#define BD71828_MASK_BUCK5_VOLT		0x1f
#define BD71828_MASK_LDO_VOLT		0x3f

/* Regulator control regs */
#define BD71828_REG_BUCK1_EN		0x08
#define BD71828_REG_BUCK1_CTRL		0x09
#define BD71828_REG_BUCK1_MODE		0x0a
#define BD71828_REG_BUCK1_IDLE_VOLT	0x0b
#define BD71828_REG_BUCK1_SUSP_VOLT	0x0c
#define BD71828_REG_BUCK1_VOLT		0x0d

#define BD71828_REG_BUCK2_EN		0x12
#define BD71828_REG_BUCK2_CTRL		0x13
#define BD71828_REG_BUCK2_MODE		0x14
#define BD71828_REG_BUCK2_IDLE_VOLT	0x15
#define BD71828_REG_BUCK2_SUSP_VOLT	0x16
#define BD71828_REG_BUCK2_VOLT		0x17

#define BD71828_REG_BUCK3_EN		0x1c
#define BD71828_REG_BUCK3_MODE		0x1d
#define BD71828_REG_BUCK3_VOLT		0x1e

#define BD71828_REG_BUCK4_EN		0x1f
#define BD71828_REG_BUCK4_MODE		0x20
#define BD71828_REG_BUCK4_VOLT		0x21

#define BD71828_REG_BUCK5_EN		0x22
#define BD71828_REG_BUCK5_MODE		0x23
#define BD71828_REG_BUCK5_VOLT		0x24

#define BD71828_REG_BUCK6_EN		0x25
#define BD71828_REG_BUCK6_CTRL		0x26
#define BD71828_REG_BUCK6_MODE		0x27
#define BD71828_REG_BUCK6_IDLE_VOLT	0x28
#define BD71828_REG_BUCK6_SUSP_VOLT	0x29
#define BD71828_REG_BUCK6_VOLT		0x2a

#define BD71828_REG_BUCK7_EN		0x2f
#define BD71828_REG_BUCK7_CTRL		0x30
#define BD71828_REG_BUCK7_MODE		0x31
#define BD71828_REG_BUCK7_IDLE_VOLT	0x32
#define BD71828_REG_BUCK7_SUSP_VOLT	0x33
#define BD71828_REG_BUCK7_VOLT		0x34

#define BD71828_REG_LDO1_EN		0x39
#define BD71828_REG_LDO1_VOLT		0x3a
#define BD71828_REG_LDO2_EN		0x3b
#define BD71828_REG_LDO2_VOLT		0x3c
#define BD71828_REG_LDO3_EN		0x3d
#define BD71828_REG_LDO3_VOLT		0x3e
#define BD71828_REG_LDO4_EN		0x3f
#define BD71828_REG_LDO4_VOLT		0x40
#define BD71828_REG_LDO5_EN		0x41
#define BD71828_REG_LDO5_VOLT		0x43
#define BD71828_REG_LDO5_VOLT_OPT	0x42
#define BD71828_REG_LDO6_EN		0x44
//#define BD71828_REG_LDO6_VOLT		0x4
#define BD71828_REG_LDO7_EN		0x45
#define BD71828_REG_LDO7_VOLT		0x46

/* GPIO */

#define BD71828_GPIO_DRIVE_MASK		0x2
#define BD71828_GPIO_OPEN_DRAIN		0x0
#define BD71828_GPIO_PUSH_PULL		0x2
#define BD71828_GPIO_OUT_HI		0x1
#define BD71828_GPIO_OUT_LO		0x0
#define BD71828_GPIO_OUT_MASK		0x1

#define BD71828_REG_GPIO_CTRL1		0x47
#define BD71828_REG_GPIO_CTRL2		0x48
#define BD71828_REG_GPIO_CTRL3		0x49
#define BD71828_REG_IO_STAT		0xed

/* RTC */
#define BD71828_REG_RTC_SEC		0x4c
#define BD71828_REG_RTC_MINUTE		0x4d
#define BD71828_REG_RTC_HOUR		0x4e
#define BD71828_REG_RTC_WEEK		0x4f
#define BD71828_REG_RTC_DAY		0x50
#define BD71828_REG_RTC_MONTH		0x51
#define BD71828_REG_RTC_YEAR		0x52

#define BD71828_REG_RTC_ALM0_SEC	0x53
#define BD71828_REG_RTC_ALM_START	BD71828_REG_RTC_ALM0_SEC
#define BD71828_REG_RTC_ALM0_MINUTE	0x54
#define BD71828_REG_RTC_ALM0_HOUR	0x55
#define BD71828_REG_RTC_ALM0_WEEK	0x56
#define BD71828_REG_RTC_ALM0_DAY	0x57
#define BD71828_REG_RTC_ALM0_MONTH	0x58
#define BD71828_REG_RTC_ALM0_YEAR	0x59
#define BD71828_REG_RTC_ALM0_MASK	0x61

#define BD71828_REG_RTC_ALM1_SEC	0x5a
#define BD71828_REG_RTC_ALM1_MINUTE	0x5b
#define BD71828_REG_RTC_ALM1_HOUR	0x5c
#define BD71828_REG_RTC_ALM1_WEEK	0x5d
#define BD71828_REG_RTC_ALM1_DAY	0x5e
#define BD71828_REG_RTC_ALM1_MONTH	0x5f
#define BD71828_REG_RTC_ALM1_YEAR	0x60
#define BD71828_REG_RTC_ALM1_MASK	0x62

#define BD71828_REG_RTC_ALM2		0x63
#define BD71828_REG_RTC_START		BD71828_REG_RTC_SEC

/* Charger/Battey */
#define BD71828_REG_CHG_STATE		0x65
#define BD71828_REG_CHG_FULL		0xd2

/* LEDs */
#define BD71828_REG_LED_CTRL		0x4A
#define BD71828_MASK_LED_AMBER		0x80
#define BD71828_MASK_LED_GREEN		0x40
#define BD71828_LED_ON			0xff
#define BD71828_LED_OFF			0x0

/* IRQ registers */
#define BD71828_REG_INT_MASK_BUCK	0xd3
#define BD71828_REG_INT_MASK_DCIN1	0xd4
#define BD71828_REG_INT_MASK_DCIN2	0xd5
#define BD71828_REG_INT_MASK_VSYS	0xd6
#define BD71828_REG_INT_MASK_CHG	0xd7
#define BD71828_REG_INT_MASK_BAT	0xd8
#define BD71828_REG_INT_MASK_BAT_MON1	0xd9
#define BD71828_REG_INT_MASK_BAT_MON2	0xda
#define BD71828_REG_INT_MASK_BAT_MON3	0xdb
#define BD71828_REG_INT_MASK_BAT_MON4	0xdc
#define BD71828_REG_INT_MASK_TEMP	0xdd
#define BD71828_REG_INT_MASK_RTC	0xde

#define BD71828_REG_INT_MAIN		0xdf
#define BD71828_REG_INT_BUCK		0xe0
#define BD71828_REG_INT_DCIN1		0xe1
#define BD71828_REG_INT_DCIN2		0xe2
#define BD71828_REG_INT_VSYS		0xe3
#define BD71828_REG_INT_CHG		0xe4
#define BD71828_REG_INT_BAT		0xe5
#define BD71828_REG_INT_BAT_MON1	0xe6
#define BD71828_REG_INT_BAT_MON2	0xe7
#define BD71828_REG_INT_BAT_MON3	0xe8
#define BD71828_REG_INT_BAT_MON4	0xe9
#define BD71828_REG_INT_TEMP		0xea
#define BD71828_REG_INT_RTC		0xeb
#define BD71828_REG_INT_UPDATE		0xec

#define BD71828_MAX_REGISTER BD71828_REG_IO_STAT

/* Masks for main IRQ register bits */
enum {
	BD71828_INT_BUCK,
#define BD71828_INT_BUCK_MASK BIT(BD71828_INT_BUCK)
	BD71828_INT_DCIN,
#define BD71828_INT_DCIN_MASK BIT(BD71828_INT_DCIN)
	BD71828_INT_VSYS,
#define BD71828_INT_VSYS_MASK BIT(BD71828_INT_VSYS)
	BD71828_INT_CHG,
#define BD71828_INT_CHG_MASK BIT(BD71828_INT_CHG)
	BD71828_INT_BAT,
#define BD71828_INT_BAT_MASK BIT(BD71828_INT_BAT)
	BD71828_INT_BAT_MON,
#define BD71828_INT_BAT_MON_MASK BIT(BD71828_INT_BAT_MON)
	BD71828_INT_TEMP,
#define BD71828_INT_TEMP_MASK BIT(BD71828_INT_TEMP)
	BD71828_INT_RTC,
#define BD71828_INT_RTC_MASK BIT(BD71828_INT_RTC)
};

/* Interrupts */
enum {
	/* BUCK reg interrupts */
	BD71828_INT_BUCK1_OCP,
	BD71828_INT_BUCK2_OCP,
	BD71828_INT_BUCK3_OCP,
	BD71828_INT_BUCK4_OCP,
	BD71828_INT_BUCK5_OCP,
	BD71828_INT_BUCK6_OCP,
	BD71828_INT_BUCK7_OCP,
	BD71828_INT_PGFAULT,
	/* DCIN1 interrupts */
	BD71828_INT_DCIN_DET,
	BD71828_INT_DCIN_RMV,
	BD71828_INT_CLPS_OUT,
	BD71828_INT_CLPS_IN,
	/* DCIN2 interrupts */
	BD71828_INT_DCIN_MON_RES,
	BD71828_INT_DCIN_MON_DET,
	BD71828_INT_LONGPUSH,
	BD71828_INT_MIDPUSH,
	BD71828_INT_SHORTPUSH,
	BD71828_INT_PUSH,
	BD71828_INT_WDOG,
	BD71828_INT_SWRESET,
	/* Vsys */
	BD71828_INT_VSYS_UV_RES,
	BD71828_INT_VSYS_UV_DET,
	BD71828_INT_VSYS_LOW_RES,
	BD71828_INT_VSYS_LOW_DET,
	BD71828_INT_VSYS_HALL_IN,
	BD71828_INT_VSYS_HALL_TOGGLE,
	BD71828_INT_VSYS_MON_RES,
	BD71828_INT_VSYS_MON_DET,
	/* Charger */
	BD71828_INT_CHG_DCIN_ILIM,
	BD71828_INT_CHG_TOPOFF_TO_DONE,
	BD71828_INT_CHG_WDG_TEMP,
	BD71828_INT_CHG_WDG_TIME,
	BD71828_INT_CHG_RECHARGE_RES,
	BD71828_INT_CHG_RECHARGE_DET,
	BD71828_INT_CHG_RANGED_TEMP_TRANSITION,
	BD71828_INT_CHG_STATE_TRANSITION,
	/* Battery */
	BD71828_INT_BAT_TEMP_NORMAL,
	BD71828_INT_BAT_TEMP_ERANGE,
	BD71828_INT_BAT_TEMP_WARN,
	BD71828_INT_BAT_REMOVED,
	BD71828_INT_BAT_DETECTED,
	BD71828_INT_THERM_REMOVED,
	BD71828_INT_THERM_DETECTED,
	/* Battery Mon 1 */
	BD71828_INT_BAT_DEAD,
	BD71828_INT_BAT_SHORTC_RES,
	BD71828_INT_BAT_SHORTC_DET,
	BD71828_INT_BAT_LOW_VOLT_RES,
	BD71828_INT_BAT_LOW_VOLT_DET,
	BD71828_INT_BAT_OVER_VOLT_RES,
	BD71828_INT_BAT_OVER_VOLT_DET,
	/* Battery Mon 2 */
	BD71828_INT_BAT_MON_RES,
	BD71828_INT_BAT_MON_DET,
	/* Battery Mon 3 (Coulomb counter) */
	BD71828_INT_BAT_CC_MON1,
	BD71828_INT_BAT_CC_MON2,
	BD71828_INT_BAT_CC_MON3,
	/* Battery Mon 4 */
	BD71828_INT_BAT_OVER_CURR_1_RES,
	BD71828_INT_BAT_OVER_CURR_1_DET,
	BD71828_INT_BAT_OVER_CURR_2_RES,
	BD71828_INT_BAT_OVER_CURR_2_DET,
	BD71828_INT_BAT_OVER_CURR_3_RES,
	BD71828_INT_BAT_OVER_CURR_3_DET,
	/* Temperature */
	BD71828_INT_TEMP_BAT_LOW_RES,
	BD71828_INT_TEMP_BAT_LOW_DET,
	BD71828_INT_TEMP_BAT_HI_RES,
	BD71828_INT_TEMP_BAT_HI_DET,
	BD71828_INT_TEMP_CHIP_OVER_125_RES,
	BD71828_INT_TEMP_CHIP_OVER_125_DET,
	BD71828_INT_TEMP_CHIP_OVER_VF_DET,
	BD71828_INT_TEMP_CHIP_OVER_VF_RES,
	/* RTC Alarm */
	BD71828_INT_RTC0,
	BD71828_INT_RTC1,
	BD71828_INT_RTC2,
};

#define BD71828_INT_BUCK1_OCP_MASK			0x1
#define BD71828_INT_BUCK2_OCP_MASK			0x2
#define BD71828_INT_BUCK3_OCP_MASK			0x4
#define BD71828_INT_BUCK4_OCP_MASK			0x8
#define BD71828_INT_BUCK5_OCP_MASK			0x10
#define BD71828_INT_BUCK6_OCP_MASK			0x20
#define BD71828_INT_BUCK7_OCP_MASK			0x40
#define BD71828_INT_PGFAULT_MASK			0x80

#define BD71828_INT_DCIN_DET_MASK			0x1
#define BD71828_INT_DCIN_RMV_MASK			0x2
#define BD71828_INT_CLPS_OUT_MASK			0x4
#define BD71828_INT_CLPS_IN_MASK			0x8
	/* DCIN2 interrupts */
#define BD71828_INT_DCIN_MON_RES_MASK			0x1
#define BD71828_INT_DCIN_MON_DET_MASK			0x2
#define BD71828_INT_LONGPUSH_MASK			0x4
#define BD71828_INT_MIDPUSH_MASK			0x8
#define BD71828_INT_SHORTPUSH_MASK			0x10
#define BD71828_INT_PUSH_MASK				0x20
#define BD71828_INT_WDOG_MASK				0x40
#define BD71828_INT_SWRESET_MASK			0x80
	/* Vsys */
#define BD71828_INT_VSYS_UV_RES_MASK			0x1
#define BD71828_INT_VSYS_UV_DET_MASK			0x2
#define BD71828_INT_VSYS_LOW_RES_MASK			0x4
#define BD71828_INT_VSYS_LOW_DET_MASK			0x8
#define BD71828_INT_VSYS_HALL_IN_MASK			0x10
#define BD71828_INT_VSYS_HALL_TOGGLE_MASK		0x20
#define BD71828_INT_VSYS_MON_RES_MASK			0x40
#define BD71828_INT_VSYS_MON_DET_MASK			0x80
	/* Charger */
#define BD71828_INT_CHG_DCIN_ILIM_MASK			0x1
#define BD71828_INT_CHG_TOPOFF_TO_DONE_MASK		0x2
#define BD71828_INT_CHG_WDG_TEMP_MASK			0x4
#define BD71828_INT_CHG_WDG_TIME_MASK			0x8
#define BD71828_INT_CHG_RECHARGE_RES_MASK		0x10
#define BD71828_INT_CHG_RECHARGE_DET_MASK		0x20
#define BD71828_INT_CHG_RANGED_TEMP_TRANSITION_MASK	0x40
#define BD71828_INT_CHG_STATE_TRANSITION_MASK		0x80
	/* Battery */
#define BD71828_INT_BAT_TEMP_NORMAL_MASK		0x1
#define BD71828_INT_BAT_TEMP_ERANGE_MASK		0x2
#define BD71828_INT_BAT_TEMP_WARN_MASK			0x4
#define BD71828_INT_BAT_REMOVED_MASK			0x10
#define BD71828_INT_BAT_DETECTED_MASK			0x20
#define BD71828_INT_THERM_REMOVED_MASK			0x40
#define BD71828_INT_THERM_DETECTED_MASK			0x80
	/* Battery Mon 1 */
#define BD71828_INT_BAT_DEAD_MASK			0x2
#define BD71828_INT_BAT_SHORTC_RES_MASK			0x4
#define BD71828_INT_BAT_SHORTC_DET_MASK			0x8
#define BD71828_INT_BAT_LOW_VOLT_RES_MASK		0x10
#define BD71828_INT_BAT_LOW_VOLT_DET_MASK		0x20
#define BD71828_INT_BAT_OVER_VOLT_RES_MASK		0x40
#define BD71828_INT_BAT_OVER_VOLT_DET_MASK		0x80
	/* Battery Mon 2 */
#define BD71828_INT_BAT_MON_RES_MASK			0x1
#define BD71828_INT_BAT_MON_DET_MASK			0x2
	/* Battery Mon 3 (Coulomb counter) */
#define BD71828_INT_BAT_CC_MON1_MASK			0x1
#define BD71828_INT_BAT_CC_MON2_MASK			0x2
#define BD71828_INT_BAT_CC_MON3_MASK			0x4
	/* Battery Mon 4 */
#define BD71828_INT_BAT_OVER_CURR_1_RES_MASK		0x1
#define BD71828_INT_BAT_OVER_CURR_1_DET_MASK		0x2
#define BD71828_INT_BAT_OVER_CURR_2_RES_MASK		0x4
#define BD71828_INT_BAT_OVER_CURR_2_DET_MASK		0x8
#define BD71828_INT_BAT_OVER_CURR_3_RES_MASK		0x10
#define BD71828_INT_BAT_OVER_CURR_3_DET_MASK		0x20
	/* Temperature */
#define BD71828_INT_TEMP_BAT_LOW_RES_MASK		0x1
#define BD71828_INT_TEMP_BAT_LOW_DET_MASK		0x2
#define BD71828_INT_TEMP_BAT_HI_RES_MASK		0x4
#define BD71828_INT_TEMP_BAT_HI_DET_MASK		0x8
#define BD71828_INT_TEMP_CHIP_OVER_125_RES_MASK		0x10
#define BD71828_INT_TEMP_CHIP_OVER_125_DET_MASK		0x20
#define BD71828_INT_TEMP_CHIP_OVER_VF_RES_MASK		0x40
#define BD71828_INT_TEMP_CHIP_OVER_VF_DET_MASK		0x80
	/* RTC Alarm */
#define BD71828_INT_RTC0_MASK				0x1
#define BD71828_INT_RTC1_MASK				0x2
#define BD71828_INT_RTC2_MASK				0x4

#define BD71828_OUT_TYPE_MASK				0x2
#define BD71828_OUT_TYPE_OPEN_DRAIN			0x0
#define BD71828_OUT_TYPE_CMOS				0x2

#endif /* __LINUX_MFD_BD71828_H__ */
