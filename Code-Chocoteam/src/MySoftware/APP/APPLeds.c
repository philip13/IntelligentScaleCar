/*============================================================================*/
/*                         The Freescale Cup                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* %name:            %	APPLeds.c
* %version:         %	1.0
* %created_by:      %   Continental
* %date_created:    %   Sun Aug 21 16:20:00 2011 
*=============================================================================*/
/* DESCRIPTION : Contains applications that use the TRK-MPC5604B LEDS         */
/*============================================================================*/
/* FUNCTION COMMENT : comment here										      */
/*                                                                            */
/*                                                                            */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*  REVISION |   DATE      |                               |      AUTHOR      */
/*----------------------------------------------------------------------------*/
/*  1.0      | 21/08/2011  |                               | Continental     */
/* Application using LEDS to show the scheduler working                       */
/*============================================================================*/

/* Includes */
/* -------- */
#include "stdtypedef.h"
#include "HALLeds.h"
#include "APPLeds.h"
#include "MAL_pit.h"

/* Functions macros, constants, types and datas         */
/* ---------------------------------------------------- */
/* Functions macros */

/*==================================================*/ 
/* Definition of constants                          */
/*==================================================*/ 


/*======================================================*/ 
/* Definition of RAM variables                          */
/*======================================================*/ 


/*======================================================*/ 
/* close variable declaration sections                  */
/*======================================================*/ 

/* Private defines */

/* Private functions prototypes */
/* ---------------------------- */

/* Exported functions prototypes */
/* ----------------------------- */


/**************************************************************
*  Name                 : Led1_init
*  Description          : Prepare Led1 application.
						  This function initialize Led1_app 
*  Parameters           :  none
*  Return               :  none
*  Critical/explanation :  No
**************************************************************/
void APPLeds_Led1_init(void)
{
	HALLeds_init_Led1_hardware();
	Set_Led1_State(LED_OFF);

}


/**************************************************************
*  Name                 : Led1_app
*  Description          : Toggle Led1. 
*  Parameters           :  none
*  Return               :  none
*  Critical/explanation :  No
**************************************************************/
void APPLeds_Led1_app(void)
{
	// Toggle Led1
	if(LED_OFF == Get_Led1_State())
	{
		Set_Led1_State(LED_ON);
	}
	else 
	{
		Set_Led1_State(LED_OFF);
	}

}

/**************************************************************
*  Name                 : Led2_init
*  Description          : Prepare Led2 application.
						  This function initialize Led1_app 
*  Parameters           :  none
*  Return               :  none
*  Critical/explanation :  No
**************************************************************/
void APPLeds_Led2_init(void)
{
	HALLeds_init_Led2_hardware();
	Set_Led2_State(LED_OFF);

}

/**************************************************************
*  Name                 : Led2_app
*  Description          : Toggle Led2. 
*  Parameters           :  none
*  Return               :  none
*  Critical/explanation :  No
**************************************************************/
void APPLeds_Led2_app(void)
{
	// Toggle Led2
	if(LED_OFF == Get_Led2_State())
	{
		Set_Led2_State(LED_ON);
	}
	else 
	{
		Set_Led2_State(LED_OFF);
	}

}

/**************************************************************
*  Name                 : Led3_init
*  Description          : Prepare Led3 application.
						  This function initialize Led1_app 
*  Parameters           :  none
*  Return               :  none
*  Critical/explanation :  No
**************************************************************/
void APPLeds_Led3_init(void)
{
	HALLeds_init_Led3_hardware();
	Set_Led3_State(LED_OFF);

}

/**************************************************************
*  Name                 : Led3_app
*  Description          : Toggle Led3. 
*  Parameters           :  none
*  Return               :  none
*  Critical/explanation :  No
**************************************************************/
void APPLeds_Led3_app(void)
{
	// Toggle Led3
	LedToggle(LED3_PIN);
}

/**************************************************************
*  Name                 : Led4_init
*  Description          : Prepare Led4 application.
						  This function initialize Led1_app 
*  Parameters           :  none
*  Return               :  none
*  Critical/explanation :  No
**************************************************************/
void APPLeds_Led4_init(void)
{

	HALLeds_init_Led4_hardware();
	Set_Led4_State(LED_OFF);
}

/**************************************************************
*  Name                 : Led4_app
*  Description          : Toggle Led4. 
*  Parameters           :  none
*  Return               :  none
*  Critical/explanation :  No
**************************************************************/
void APPLeds_Led4_app(void)
{
	// Toggle Led4
	LedToggle(LED4_PIN);
}


/**************************************************************
*  Name                 : Led1_init
*  Description          : Prepare Led1 application.
						  This function initialize Led1_app 
*  Parameters           :  none
*  Return               :  none
*  Critical/explanation :  No
**************************************************************/
void APPAdc_init(void)
{
	HALLAdc_init_hardware();

}


/**************************************************************
*  Name                 : Led1_app
*  Description          : Toggle Led1. 
*  Parameters           :  none
*  Return               :  none
*  Critical/explanation :  No
**************************************************************/
void APPAdc_read_app(void)
{
	Read_adc_State();
}





  
