/*============================================================================*/
/*                        SV C CE SOFTWARE GROUP                              */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* C Source:         %ISRs.c%
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
#include "ISRs.h"

/*    APIs   */
/*-----------*/
// include here the files where ISRs handlers are used
//#include "APPLeds.h"


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
 *  Name                 :  ISRs_SetPiorityAllISRs
 *  Description          :  This is the function to initialize all the ISRs that your application will be using
 *  Parameters           :  none
 *  Return               :  none
 *  Critical/explanation :  This function is called from system initialization, 
                            so you do not need to call it. 
 **************************************************************/
void ISRs_SetPiorityAllISRs(void)
{
	//ISRS_SET_PRIORITY(PIT0_INTR, NORMAL_PRIORITY);
	//ISRS_SET_PRIORITY(PIT1_INTR, NORMAL_PRIORITY);
	//ISRS_SET_PRIORITY(SIU_EXT0_INTR, NORMAL_PRIORITY);
	//ISRS_SET_PRIORITY(ADC0_EOC_INTR, NORMAL_PRIORITY);
	//ISRS_SET_PRIORITY(ADC0_ER_INTR, NORMAL_PRIORITY);
}


/**************************************************************
 *  Name                 :  ISRs_PIT0_Interrupt
 *  Description          :  This is the interruption for PIT channel 0
 *  Parameters           :  none
 *  Return               :  none
 *  Critical/explanation :  No
 **************************************************************/
void ISRs_PIT0_Interrupt(void)
{
	PIT.CH[0].TFLG.B.TIF = 1; // Clear timer interrupt flag 
	
	// The task to execute
	
}

/**************************************************************
 *  Name                 :  ISRs_PIT1_Interrupt
 *  Description          :  This is the interruption for PIT channel 1
 *  Parameters           :  none
 *  Return               :  none
 *  Critical/explanation :  No
 **************************************************************/
void ISRs_PIT1_Interrupt(void)
{
	PIT.CH[1].TFLG.B.TIF = 1; // Clear timer interrupt flag 
	//The task to execute;
}
