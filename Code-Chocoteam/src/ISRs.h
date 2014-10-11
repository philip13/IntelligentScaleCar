/*============================================================================*/
/*                        SV C BC SOFTWARE GROUP                              */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* C Include:        %ISRs.h%
* Instance:         RPL_1
* %version:         1 %
* %created_by:      uid02495 %
* %date_created:    Fri Feb 28 13:41:01 2003 %
*=============================================================================*/
/* DESCRIPTION : Header file template                                         */
/*============================================================================*/
/* FUNCTION COMMENT : contains only symbols which are exported to internal    */
/* platform modules. This will not be delivered with the library              */
/*                                                                            */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*  REVISION |   DATE      |                               |      AUTHOR      */
/*----------------------------------------------------------------------------*/
/*  1.0      | DD/MM/YYYY  | SAR/SIF/SCN_xxx               | Mr. Template     */
/* Integration under Continuus CM                                             */
/*============================================================================*/

#ifndef ISRS_H                               /* To avoid double inclusion */
#define ISRS_H

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




/* Functions macros */
// Set interrupt priority
#define ISRS_SET_PRIORITY(Irq_num, priority)					(INTC.PSR[(Irq_num)].R=(priority))


/* Exported defines */
#define		TICK_SCHM_PRI			2					// The current priority for scheduler Tick
#define		NORMAL_PRIORITY			TICK_SCHM_PRI		// Recomended priority

/*			Interrupt				Irq number     (Table 9-10. Interrupt Vector Table)*/
#define  	RTC_INTR				38		// Real Time Counter (RTC/API)
#define  	API_INTR				39		// Real Time Counter (RTC/API)  It is being used by Scheduler!!!!
#define  	SIU_EXT0_INTR			41		// SIU External IRQ_0
#define  	PIT0_INTR				59		// PITimer Channel 0
#define  	PIT1_INTR				60		// PITimer Channel 1
#define  	ADC0_EOC_INTR			62		// ADC_EOC ADC 0
#define  	ADC0_ER_INTR			63		// ADC_ER ADC 0
#define  	ADC0_WR_INTR			64		// ADC_WD ADC 0


/* Functions prototypes */
extern void ISRs_SetPiorityAllISRs(void);	// Do not remove!!!!
extern void ISRs_PIT0_Interrupt(void);
extern void ISRs_PIT1_Interrupt(void);


#endif


