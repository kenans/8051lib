#ifndef _51_CONFIG_H_
#define _51_CONFIG_H_
/**
 * --------------------------------------------------
 *                   Includes
 * --------------------------------------------------
 */
#include "intrins.h"
/**
 * --------------------------------------------------
 *                   51 Type
 * --------------------------------------------------
 *  0. REG51
 *  1. REG52
 *  2. REG51xD2
 * --------------------------------------------------
 */
#define REG51_TYPE 0
/**
 * --------------------------------------------------
 *                OSC frequency
 * --------------------------------------------------
 *  0. 11.0592MHz
 *  1. 12MHz
 * --------------------------------------------------
 */
#define OSC_FREQUENCY_TYPE  1
/**
 * --------------------------------------------------
 *            Local buffer/Ring buffer
 * --------------------------------------------------
 */
/**
 * --------------------------------------------------
 *
 * --------------------------------------------------
 */
#if REG51_TYPE==0
#include "reg51_pdd.h"
#elif REG51_TYPE==1
#include "REG52.H"
#elif REG51_TYPE==2
#include "reg51xD2_pdd.h"
#else
#error "Error: REG51_TYPE out of range"
#endif  // REG51_TYPE

#if OSC_FREQUENCY_TYPE==0
#define OSC_FREQUENCY_HZ 11059200UL
#elif OSC_FREQUENCY_TYPE==1
#define OSC_FREQUENCY_HZ 12000000UL
#else
#error "Error: OSC_FREQUENCY_TYPE out of range"
#endif  // OSC_FREQUENCY_TYPE

#endif // _51_CONFIG_H_
