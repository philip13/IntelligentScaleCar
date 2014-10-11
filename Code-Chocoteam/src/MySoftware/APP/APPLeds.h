/*============================================================================*/
/*                         The Freescale Cup                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* %name:            %	APPLeds.h
* %version:         %	1.0
* %created_by:      %   David Robles
* %date_created:    %   Sun Aug 21 16:20:00 2011 
*=============================================================================*/
/* DESCRIPTION : Contains symbols for use the TRK-MPC5604B LEDS         	  */
/*============================================================================*/
/* FUNCTION COMMENT : contains only symbols which are exported to internal    */
/* platform modules. This will not be delivered with the library              */
/*                                                                            */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*  REVISION |   DATE      |                               |      AUTHOR      */
/*----------------------------------------------------------------------------*/
/*  1.0      | 21/08/2011  |                               | David Robles     */
/* Application using LEDS to show the scheduler working                       */
/*============================================================================*/

#ifndef APPLEDS_H                               /* To avoid double inclusion */
#define APPLEDS_H

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
/* BYTES */

/* WORDS */

/* LONGS and STRUCTURES */


/*======================================================*/ 
/* close variable declaration sections                  */
/*======================================================*/ 

/* Exported functions prototypes and macros */
/* ---------------------------------------- */

/* Functions prototypes */
void APPLeds_Led1_init(void);
void APPLeds_Led1_app(void);
void APPLeds_Led2_init(void);
void APPLeds_Led2_app(void);
void APPLeds_Led3_init(void);
void APPLeds_Led3_app(void);
void APPLeds_Led4_init(void);
void APPLeds_Led4_app(void);

/* Functions macros */

/* Exported defines */


#endif


