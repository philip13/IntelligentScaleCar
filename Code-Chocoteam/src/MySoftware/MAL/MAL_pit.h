/*============================================================================*/
/*                   SMART CAR RACE - UDG LIONS                               */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* name:            PIT.h
* version:         1.0
* created_by:      Michel David Robles Romero
* date_created:    July 23 2010
*=============================================================================*/
/* DESCRIPTION : Header file for basic handling of PIT chanels                */
/*============================================================================*/
/* FUNCTION COMMENT : Provides exported functions and symbols for basic       */
/* 					  handling of PIT chanels                                 */
/*                                                                            */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*  REVISION |   DATE      |                               |      AUTHOR      */
/*----------------------------------------------------------------------------*/
/*  1.0      | 23/july/2010 |                               | Michel D. Robles*/
/* Initial version for the Smart Car Race 2010 contest using Freescale        */
/* Bolero micro.                                                              */
/*============================================================================*/
#ifndef PIT_H                                    /* To avoid double inclusion */
#define PIT_H

/* Includes */
/* -------- */
#include "stdtypedef.h"

/* Exported types and constants */
/* ---------------------------- */

/* Types definition */

/* typedef */

/*==================================================*/ 
/* Declaration of exported constants                */
/*==================================================*/ 
/* BYTE constants */

/* WORD constants */

/* LONG and STRUCTURE constants */

/*======================================================*/ 
/* Definition of RAM variables                          */
/*======================================================*/ 
/* BYTE RAM variables */

/* WORD RAM variables */

/* LONG and STRUCTURE RAM variables */

/*======================================================*/ 
/* close variable declaration sections                  */
/*======================================================*/ 

/* Exported functions prototypes and macros */
/* ---------------------------------------- */


/* ========================================================================== *
 *                               PIT Timers defines                           *
 * ========================================================================== */
 // For all this defines: value = TRUE or FALSE	
#define PIT_Module_ENABLE							(PIT.PITMCR.B.MDIS = FALSE)		// Clock for PIT timers is enabled (p 815[table 30-3] Ref Man)
#define PIT_Module_DISABLE							(PIT.PITMCR.B.MDIS = TRUE)		// Clock for PIT timers is disabled (default) (p 815[table 30-3] Ref Man)
#define PIT_FROZENinDBG(value)						(PIT.PITMCR.B.FRZ = (value))	// Allows the timers to be stopped when the device enters debug mode. (p 815[table 30-3] Ref Man)
#define PIT_EnablePITchannel(channel, value)		(PIT.CH[(channel)].TCTRL.B.TEN = (value))	// Timer Enable Bit (p 818[table 30-6] Ref Man)
#define PIT_EnablePITinterrupt(channel, value)		(PIT.CH[(channel)].TCTRL.B.TIE = (value))	// Timer Interrupt Enable Bit (p 818[table 30-6] Ref Man)
#define PIT_InterruptAck(channel) 					(PIT.CH[(channel)].TFLG.B.TIF = TRUE) // Clear timer interrupt flag (p 819[table 30-7] Ref Man)
#define PIT_LoadTimerValue(channel, timerValue)		(PIT.CH[(channel)].LDVAL.R = (timerValue))	// Set Timer value for PIT timer 																		


/* ==================================================== */
/* 				Function prototipes						*/

extern void PIT_initModule(void);
extern void PIT_init(T_UBYTE channel,T_ULONG TimerValue);

#endif