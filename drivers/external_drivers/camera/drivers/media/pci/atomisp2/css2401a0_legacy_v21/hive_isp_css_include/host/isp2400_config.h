/*
 * Support for Intel Camera Imaging ISP subsystem.
 *
 * Copyright (c) 2010 - 2014 Intel Corporation. All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 *
 */

#ifndef __ISP2400_CONFIG_H_INCLUDED__
#define __ISP2400_CONFIG_H_INCLUDED__

#define NUM_BITS 14
#define NUM_SLICE_ELEMS 4
#define ROUNDMODE           ROUND_NEAREST_EVEN
#define MAX_SHIFT_1W        (NUM_BITS-1)   /* Max number of bits a 1w input can be shifted */
#define MAX_SHIFT_2W        (2*NUM_BITS-1) /* Max number of bits a 2w input can be shifted */

#endif /* __ISP2400_CONFIG_H_INCLUDED__ */
