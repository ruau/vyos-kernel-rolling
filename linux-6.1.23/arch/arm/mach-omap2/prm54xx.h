/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * OMAP54xx PRM instance offset macros
 *
 * Copyright (C) 2013 Texas Instruments Incorporated - https://www.ti.com
 *
 * Paul Walmsley (paul@pwsan.com)
 * Rajendra Nayak (rnayak@ti.com)
 * Benoit Cousson (b-cousson@ti.com)
 *
 * This file is automatically generated from the OMAP hardware databases.
 * We respectfully ask that any modifications to this file be coordinated
 * with the public linux-omap@vger.kernel.org mailing list and the
 * authors above to ensure that the autogeneration scripts are kept
 * up-to-date with the file contents.
 */

#ifndef __ARCH_ARM_MACH_OMAP2_PRM54XX_H
#define __ARCH_ARM_MACH_OMAP2_PRM54XX_H

#include "prm44xx_54xx.h"
#include "prm.h"

#define OMAP54XX_PRM_BASE		0x4ae06000

#define OMAP54XX_PRM_REGADDR(inst, reg)				\
	OMAP2_L4_IO_ADDRESS(OMAP54XX_PRM_BASE + (inst) + (reg))


/* PRM instances */
#define OMAP54XX_PRM_OCP_SOCKET_INST	0x0000
#define OMAP54XX_PRM_CKGEN_INST		0x0100
#define OMAP54XX_PRM_MPU_INST		0x0300
#define OMAP54XX_PRM_DSP_INST		0x0400
#define OMAP54XX_PRM_ABE_INST		0x0500
#define OMAP54XX_PRM_COREAON_INST	0x0600
#define OMAP54XX_PRM_CORE_INST		0x0700
#define OMAP54XX_PRM_IVA_INST		0x1200
#define OMAP54XX_PRM_CAM_INST		0x1300
#define OMAP54XX_PRM_DSS_INST		0x1400
#define OMAP54XX_PRM_GPU_INST		0x1500
#define OMAP54XX_PRM_L3INIT_INST	0x1600
#define OMAP54XX_PRM_CUSTEFUSE_INST	0x1700
#define OMAP54XX_PRM_WKUPAON_INST	0x1800
#define OMAP54XX_PRM_WKUPAON_CM_INST	0x1900
#define OMAP54XX_PRM_EMU_INST		0x1a00
#define OMAP54XX_PRM_EMU_CM_INST	0x1b00
#define OMAP54XX_PRM_DEVICE_INST	0x1c00

/* PRM clockdomain register offsets (from instance start) */
#define OMAP54XX_PRM_WKUPAON_CM_WKUPAON_CDOFFS	0x0000
#define OMAP54XX_PRM_EMU_CM_EMU_CDOFFS		0x0000

/* PRM.DEVICE_PRM register offsets */
#define OMAP54XX_PRM_VOLTSETUP_CORE_RET_SLEEP_OFFSET		0x0034
#define OMAP54XX_PRM_VOLTSETUP_MPU_RET_SLEEP_OFFSET		0x0038
#define OMAP54XX_PRM_VOLTSETUP_MM_RET_SLEEP_OFFSET		0x003c

#endif