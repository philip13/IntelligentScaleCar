/*============================================================================*/
/*                        SV C CE SOFTWARE GROUP                              */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* C Source:         %IntrCfg.c%
* %version:         1 %
* %created_by:      Continental %
* %date_created:     %
*=============================================================================*/
/* DESCRIPTION : Header file, interrupt initialize                            */
/*============================================================================*/
/* FUNCTION COMMENT :                                                         */
/*                                                                            */
/*                                                                            */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*  REVISION |   DATE      |                               |      AUTHOR      */
/*----------------------------------------------------------------------------*/
/*  1.0      | 22/08/2011  | Revision                     | Continental       */
/*                                                                            */
/*============================================================================*/

/* Includes */
/* -------- */
#include "IntrCfg.h"

/*    APIs   */
/*-----------*/
// include here the files where interrupt handlers are used
#include "HALLeds.h"


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


/* functions */
/* ------------------ */
/**************************************************************
 *  Name                 :  hw_interrupt_PIT0_Interrupt
 *  Description          :  This is the interruption for PIT channel 0
 *  Parameters           :  none
 *  Return               :  none
 *  Critical/explanation :  No
 **************************************************************/
void IntrCfg_InitAppInterrupts(void)
{
	INTERRUPTS_SET_PRIORITY(PIT0_INTR, NORMAL_PRIORITY);
}


/**************************************************************
 *  Name                 :  hw_interrupt_PIT0_Interrupt
 *  Description          :  This is the interruption for PIT channel 0
 *  Parameters           :  none
 *  Return               :  none
 *  Critical/explanation :  No
 **************************************************************/
void IntrCfg_PIT0_Interrupt( void )
{
	PIT.CH[0].TFLG.B.TIF = 1; // Clear timer interrupt flag (p 819[table 30-7] Ref Man) 
	//PIT0_IntrHandler();
	LedToggle(LED4_PIN);
}

/**************************************************************
 *  Name                 :  hw_interrupt_PIT1_Interrupt
 *  Description          :  This is the interruption for PIT channel 1
 *  Parameters           :  none
 *  Return               :  none
 *  Critical/explanation :  No
 **************************************************************/
void IntrpCfg_PIT1_Interrupt( void )
{
	PIT.CH[1].TFLG.B.TIF = 1; // Clear timer interrupt flag (p 819[table 30-7] Ref Man) 
	//PIT1_IntrHandler();
}
