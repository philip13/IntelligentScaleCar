/*============================================================================*/
/*                             Smart Car Race                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* %name:            %
* %version:         %
* %created_by:      %
* %date_created:    %
*=============================================================================*/
/* DESCRIPTION : Interrupts handling                                          */
/*============================================================================*/
/* FUNCTION COMMENT : Provices APIs to configure Interruptions                */   
/*                                                                            */
/*                                                                            */
/*============================================================================*/

#include "stdtypedef.h"
#include "hw_interrupt.h"
#include "mw_schm_trm_isr.h"
#include "ISRs.h"

extern const uint32_t IntcIsrVectorTable[];


/* APIs */

/**************************************************************
 *  Name                 : 
 *  Description          : 
 *  Parameters           : none
 *  Return               : none
 *  Critical/explanation : No
 **************************************************************/
asm void hw_interrupt_initIrqVectors(void)
{
  lis	   r3, __IVPR_VALUE@h   /* IVPR value is passed from link file */
  ori      r3, r3, __IVPR_VALUE@l 
  mtivpr   r3									 
}


/**************************************************************
 *  Name                 : initINTC
 *  Description          : 
 *  Parameters           : none
 *  Return               : none
 *  Critical/explanation : No
 **************************************************************/
void hw_interrupt_initINTC(void)
{
	INTC.MCR.B.HVEN = 0;       /* Single core: initialize for SW vector mode */
	INTC.MCR.B.VTES = 0;       /* Single core: Use default vector table 4B offsets */
	INTC.IACKR.R = (uint32_t) &IntcIsrVectorTable[0];    /* MPC555x: INTC ISR table base */
}

/**************************************************************
 *  Name                 : 
 *  Description          : 
 *  Parameters           : none
 *  Return               : none
 *  Critical/explanation : No
 **************************************************************/
void hw_interrupt_initSwIrq( char IrqNum )
{
	INTC.PSR[IrqNum].R = 2;/* Initialize API interrupt with priority level 2 */
}
 
/**************************************************************
 *  Name                 : hw_interrupt_enableIrq
 *  Description          : Enable external interrupts
 *  Parameters           : none
 *  Return               : none
 *  Critical/explanation : No
 **************************************************************/
void hw_interrupt_enableIrq(void)
{
	INTC.CPR.B.PRI = 0;          /* Single Core: Lower INTC's current priority */
	asm(" wrteei 1");	    	 /* Enable external interrupts */
}


/**************************************************************
 *  Name                 : hw_interrupt_interrupt_initCfg
 *  Description          : Initialize configuration for interruptions
 *  Parameters           :  none
 *  Return               :  none
 *  Critical/explanation :  No
 **************************************************************/
void hw_interrupt_interrupt_initCfg( void )
{
	hw_interrupt_initIrqVectors(); 	/* Initialize exceptions: only need to load IVPR */  
	hw_interrupt_initINTC(); 		/* Initialize INTC for software vector mode */
	hw_interrupt_initSwIrq(39); 	/* Initialize API interrupt */ 
	ISRs_SetPiorityAllISRs();     // Init interrupts
}


/**************************************************************
 *  Name                 : hw_interrupt_Enable_Interrupts
 *  Description          : Enable interruptions
 *  Parameters           :  none
 *  Return               :  none
 *  Critical/explanation :  No
 **************************************************************/
void hw_interrupt_Enable_Interrupts( void )
{
	hw_interrupt_enableIrq();
}


/**************************************************************
 *  Name                 : hw_interrupt_Disable_Interrupts
 *  Description          : Disable interruptions (Not implemented)
 *  Parameters           :  none
 *  Return               :  none
 *  Critical/explanation :  No
 **************************************************************/
void hw_interrupt_Disable_Interrupts( void )
{
	INTC.CPR.B.PRI = 15;          /* Single Core: Lower INTC's current priority */
	asm(" wrteei 0");	    	 /* Enable external interrupts */
}


/**************************************************************
 *  Name                 : hw_interrupt_Tick_Interrupt
 *  Description          : This is the interruption for RTC
 *  Parameters           :  none
 *  Return               :  none
 *  Critical/explanation :  No
 **************************************************************/
void hw_interrupt_Tick_Interrupt( void )
{
    RTC.RTCS.B.APIF = 1;
    SCHM_Interrupt_Handler();
}
