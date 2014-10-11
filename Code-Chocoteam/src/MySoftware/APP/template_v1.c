/*============================================================================*/
/*                        SV C CE SOFTWARE GROUP                              */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* C Source:         %template.c%
* Instance:         RPL_1
* %version:         2 %
* %created_by:      uid02495 %
* %date_created:    Fri Jan  9 14:38:03 2004 %
*=============================================================================*/
/* DESCRIPTION : C source template file                                       */
/*============================================================================*/
/* FUNCTION COMMENT : This file describes the C source template according to  */
/* the new software platform                                                  */
/*                                                                            */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*  REVISION |   DATE      |                               |      AUTHOR      */
/*----------------------------------------------------------------------------*/
/*  1.0      | DD/MM/YYYY  |                               | Mr. Template     */
/* Integration under Continuus CM                                             */
/*============================================================================*/

/* Includes */
/* -------- */
#include "template.h"

/* Functions macros, constants, types and datas         */
/* ---------------------------------------------------- */
/* Functions macros */

/*==================================================*/ 
/* Definition of constants                          */
/*==================================================*/ 
/* BYTE constants */
const T_UBYTE cub_MyRomByte = 0;

/* WORD constants */
const T_UWORD cuw_MyRomWord = 0xAA55;

/* LONG and STRUCTURE constants */
const T_ULONG cul_MyRomLong = 0x33445566;


/*======================================================*/ 
/* Definition of RAM variables                          */
/*======================================================*/ 
/* BYTE RAM variables */
T_UBYTE rub_MyInitRamByte = 1;
T_UBYTE rub_MyClearedRamByte;

/* WORD RAM variables */
T_UWORD ruw_MyInitRamWord = 0x1234;
T_UWORD ruw_MyClearedRamWord;

/* LONG and STRUCTURE RAM variables */
T_ULONG rul_MyInitRamLong = 0x56789abc;
T_ULONG rul_MyClearedRamLong;
T_MY_STRUCT rs_MyStructureVariable;

/*======================================================*/ 
/* close variable declaration sections                  */
/*======================================================*/ 

/* Private defines */
#define MY_PRIVATE_SYMBOLIC_CONSTANT		(3u)

/* Private functions prototypes */
/* ---------------------------- */
PRIVATE_FCT void priv_func (void);


/* Exported functions prototypes */
/* ----------------------------- */

/* Inline functions */
/* ---------------- */
/**************************************************************
 *  Name                 : inline_func	2
 *  Description          :
 *  Parameters           :  [Input, Output, Input / output]
 *  Return               :
 *  Critical/explanation :    [yes / No]
 **************************************************************/
INLINE_FCT void inline_func (void)
{
}

/* Private functions */
/* ----------------- */
/**************************************************************
 *  Name                 : private_func
 *  Description          :
 *  Parameters           :  [Input, Output, Input / output]
 *  Return               :
 *  Critical/explanation :    [yes / No]
 **************************************************************/
PRIVATE_FCT void private_func (void)
{
}

/* Exported functions */
/* ------------------ */
/**************************************************************
 *  Name                 :	export_func
 *  Description          :
 *  Parameters           :  [Input, Output, Input / output]
 *  Return               :
 *  Critical/explanation :    [yes / No]
 **************************************************************/
FAR_FCT void export_func (void)
{
/* user code section 1 */
/* user code section 2 */
/* user code section 3 */
}
