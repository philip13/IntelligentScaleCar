/*============================================================================*/
/*                   SMART CAR RACE, UDG LIONS    		                      */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* name:            PIT.c
* version:         1.0
* created_by:      Michel David Robles Romero
* date_created:    July 23 2010
*=============================================================================*/
/* DESCRIPTION : Source file for basic handling of PIT chanels.     		  */
/*				 															  */
/*============================================================================*/
/* FUNCTION COMMENT : Provides exported functions and symbols for basic       */
/* 					  handling of PIT chanels.                                */
/*                                                                            */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*  REVISION |   DATE      |                               |      AUTHOR      */
/*----------------------------------------------------------------------------*/
/*  1.0      | 23/jul/2010 |                               | Michel D. Robles */
/* Initial version for the Smart Car Race 2010 contest using Freescale        */
/* Bolero micro.                                                              */
/*============================================================================*/

/* Includes */
/* -------- */
#include "stdtypedef.h"
#include "MAL_pit.h"

/* Functions macros, constants, types and datas         */
/* ---------------------------------------------------- */
/* Functions macros */


/*==================================================*/ 
/* Definition of constants                          */
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

/* Private defines */

/* Private functions prototypes */
/* ---------------------------- */

/* Exported functions prototypes */
/* ----------------------------- */

/* Inline functions */
/* ---------------- */

/* Private functions */
/* ----------------- */


/* Exported functions */
/* ------------------ */

/**************************************************************
 *  Name                 :  PIT_initModule
 *  Description          :  Initialize PIT module
 *  Parameters           :  none
 *  Return               :  none
 *  Critical/explanation :  No
 **************************************************************/
 
 void PIT_initModule(void)
 {
 	PIT_Module_ENABLE;			// Enable PIT module
 	PIT_FROZENinDBG(TRUE);		// When system enter in debug mode, PIT timers will be able to frozen
 }
 
 /**************************************************************
 *  Name                 :  PIT5_init
 *  Description          :  Initialize PIT channel n 
 *  Parameters           :  T_UBYTE channel: PIT channel selected / T_ULONG TimerValue: Initial value of timer duration (CLKsys) 
 *  Return               :  none
 *  Critical/explanation :  No
 **************************************************************/
 
 void PIT_init(T_UBYTE channel,T_ULONG TimerValue)
 {
 	// Turn off timer in the beginning 
 	PIT_EnablePITchannel(channel, FALSE);
 	// Clear ISR flagg before enable ISR		
 	PIT_InterruptAck(channel);		
 	// Enable ISR 	
 	PIT_EnablePITinterrupt(channel, TRUE);
 	// Load initial period, in system cycles (CLKsys), on what timer sources an interrupt
 	PIT_LoadTimerValue(channel, TimerValue);	
 }
 