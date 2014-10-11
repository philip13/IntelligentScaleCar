/*============================================================================*/
/*                          The Freescale Cup                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* C Source:         initapp.c
* %version:         1 %
* %created_by:      Continental %
* %date_created:     %
*=============================================================================*/
/* DESCRIPTION :  Initialize tasks                                            */
/*============================================================================*/
/* FUNCTION COMMENT : Add here your initialization tasks.                     */
/*                                                                            */
/*                                                                            */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*  REVISION |   DATE      |                               |      AUTHOR      */
/*----------------------------------------------------------------------------*/
/*  1.0      | 22/08/2011  |  Revision                     | Continental      */
/*                                                                            */
/*============================================================================*/

/* Includes */
/* ------------------- */
/* Common declarations */
/* ------------------- */
#include "apptask.h"

/*       SW API    */
/* --------------- */
#include "APPLeds.h"

/* Exported functions prototypes */
/* ----------------------------- */
void initapp_task_28us(void);
void initapp_task_28usd(void);
void initapp_task_56us(void);
void initapp_task_112us(void);
void initapp_task_1ms(void);
void initapp_task_14ms(void);

/**************************************************************
 *  Name                 : initapp_task_28us
 *  Description          :
 *  Parameters           :  none
 *  Return               :	none
 *  Critical/explanation :  no
 **************************************************************/
 void initapp_task_28us(void)
 {
	APPLeds_Led1_init();
	APPLeds_Led3_init();

 }

/**************************************************************
 *  Name                 : initapp_task_28usd
 *  Description          :Delay 28 us
 *  Parameters           :  none
 *  Return               :	none
 *  Critical/explanation :  no
 **************************************************************/
 void initapp_task_28usd(void)
 {
	
 }
 
 /**************************************************************
 *  Name                 : initapp_task_56usd
 *  Description          : 56 us
 *  Parameters           :  none
 *  Return               :	none
 *  Critical/explanation :  no
 **************************************************************/
 void initapp_task_56us(void)
 {
			APPLeds_Led2_init();
 }
 
 
 
 
/**************************************************************
 *  Name                 : initapp_task_8_4ms
 *  Description          :Delay 28 us
 *  Parameters           :  none
 *  Return               :	none
 *  Critical/explanation :  no
 **************************************************************/
 void initapp_task_112us(void)
 {
		HALLAdc_init_hardware();
		APPAdc_read_app();
	
		
 }
 
/**************************************************************
 *  Name                 : initapp_task_5ms
 *  Description          :
 *  Parameters           :  none
 *  Return               :	none
 *  Critical/explanation :  no
 **************************************************************/
 void initapp_task_1ms(void)
 {
	HALLEmios_ini_hardware();
 }
 	
/**************************************************************
 *  Name                 : initapp_task_14ms
 *  Description          :	EVERY 14.224 mS
 *  Parameters           :  none
 *  Return               :	none
 *  Critical/explanation :  no
 **************************************************************/
 void initapp_task_14ms(void)
 {

 }