/*============================================================================*/
/*                            The Freesclae Cup                               */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* C Source:         initapp.h
* %version:         1 %
* %created_by:      Continental %
* %date_created:     %
*=============================================================================*/
/* DESCRIPTION : Header file, initialization task cointainer                  */
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

#ifndef INITAPP_H                                /* To avoid double inclusion */
#define INITAPP_H

/* Includes */
/* -------- */
#include "stdtypedef.h"


/* Exported functions prototypes and macros */
/* ---------------------------------------- */

extern void initapp_task_28us(void);
extern void initapp_task_28usd(void);
extern void initapp_task_56us(void);
extern void initapp_task_112us(void);
extern void initapp_task_1ms(void);
extern void initapp_task_14ms(void);

#endif


