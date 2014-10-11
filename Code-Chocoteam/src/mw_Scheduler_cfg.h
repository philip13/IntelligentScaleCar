/*============================================================================*/
/*                  CONTINENTAL AUTOMOTIVE SA DE CV                           */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* C Include:        mw_Scheduler_cfg.h%     
* %version:         1.0 
* %created_by:      Continental
* %date_created:    Sun Aug 21 16:20:00 2011 
*=============================================================================*/
/* DESCRIPTION : In this file is found out some scheduler configurations      */
/*============================================================================*/
/* FUNCTION COMMENT : Configure the tick rate and enable the                  */
/* freeze tick in debug mode. 											      */
/*                                                                            */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*  REVISION |   DATE      |                               |      AUTHOR      */
/*----------------------------------------------------------------------------*/
/*  1.0      | 21/08/2011  |                               | Continental      */
/* File creation. These configurations just apply on MPC5604B micro           */
/*============================================================================*/

#ifndef MW_SCHEDULER_CFG_H                               /* To avoid double inclusion */
#define MW_SCHEDULER_CFG_H

/* Includes */
/* -------- */
#include "stdtypedef.h"

/* Enable frozeen of scheduler tick in debug mode*/
/*  1: enable tick frozzen, 
    0: disable tick frozzen */
#define FROZEEN_TICK	1 

/* Define Scheduler Tick rate */
/* See reference manual, Real Time Clock in API mode */
/* Be sure of the value to select !!!! */
#define SCHEDULER_RATE	1
//Cambiar variable Scheduler Rate de 145 a 1= 6.896551724 us
/* Default value: 145 for 1ms tick rate */
/* 
Info:
RTC clock: SIRC 128KHz
SIRC div: no division
*/


#endif


