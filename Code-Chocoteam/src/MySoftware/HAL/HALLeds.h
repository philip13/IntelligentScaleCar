/*============================================================================*/
/*                         The Freescale Cup                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* %name:            %	HALLeds.h
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
/* Hardware abstraction layer of TRK-MPC5604B LEDS                            */
/*============================================================================*/

#ifndef HALLEDS_H                               /* To avoid double inclusion */
#define HALLEDS_H

/* Includes */
/* -------- */
#include "stdtypedef.h"
#include "MALioapi.h"

/* Exported types and constants */
/* ---------------------------- */

/* Types definition */
/* typedef */
typedef enum
{
	LED_OFF,
	LED_ON
}E_SM_LED_ST;	/* LED States */

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
void HALLeds_init_Led1_hardware (void);
void Set_Led1_State (E_SM_LED_ST le_LedState);
E_SM_LED_ST Get_Led1_State (void);
void HALLeds_init_Led2_hardware (void);
void Set_Led2_State (E_SM_LED_ST le_LedState);
E_SM_LED_ST Get_Led2_State (void);
void HALLeds_init_Led3_hardware (void);
void Set_Led3_State (E_SM_LED_ST le_LedState);
void HALLeds_init_Led4_hardware (void);
void Set_Led4_State (E_SM_LED_ST le_LedState);
void LedToggle (T_UBYTE pinLED);

/* Functions macros */


/* Exported defines */
// Define pin to use for LED1
#define LED1_PIN		pin_PE4
#define LED2_PIN		pin_PE5
#define LED3_PIN		pin_PE6
#define LED4_PIN		pin_PE7

#endif


