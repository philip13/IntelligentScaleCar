/*============================================================================*/
/*                        SV C BC SOFTWARE GROUP                              */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* C Include:        %template.h%
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

#ifndef TEMPLATE_H                               /* To avoid double inclusion */
#define TEMPLATE_H

/* Includes */
/* -------- */
#include "stdtypedef.h"

/* Exported types and constants */
/* ---------------------------- */

/* Types definition */
/* typedef */
typedef struct
{
	T_UBYTE ub_ByteElement;
	T_UWORD uw_WordElement;
} T_MY_STRUCT;

/*==================================================*/ 
/* Declaration of exported constants                */
/*==================================================*/ 
/* BYTE constants */
extern const T_UBYTE cub_MyRomByte;

/* WORD constants */
extern const T_UWORD cuw_MyRomWord;

/* LONG and STRUCTURE constants */
extern const T_ULONG cul_MyRomLong;


/*======================================================*/ 
/* Definition of RAM variables                          */
/*======================================================*/ 
/* BYTES */
extern T_UBYTE rub_MyInitRamByte;
extern T_UBYTE rub_MyClearedRamByte;

/* WORDS */
extern T_UWORD ruw_MyInitRamWord;
extern T_UWORD ruw_MyClearedRamWord;

/* LONGS and STRUCTURES */
extern T_ULONG rul_MyInitRamLong;
extern T_ULONG rul_MyClearedRamLong;
extern T_MY_STRUCT rs_MyStructureVariable;

/*======================================================*/ 
/* close variable declaration sections                  */
/*======================================================*/ 

/* Exported functions prototypes and macros */
/* ---------------------------------------- */

/* Functions prototypes */
extern FAR_FCT void export_func (void);

/* Functions macros */
#define EXPORTED_SUM(a, b)					((a) + (b))
#define GET_BYTE_ELEMENT()					(rs_MyStructureVariable.ub_ByteElement)
#define SET_BYTE_ELEMENT(value)				(rs_MyStructureVariable.ub_ByteElement = value)

/* Exported defines */
#define MY_EXPORTED_SYMBOLIC_CONSTANT		(0x00)

#endif


