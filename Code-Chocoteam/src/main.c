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
/* DESCRIPTION : Main Function                                                */
/*============================================================================*/
/* FUNCTION COMMENT : main function to call the initialization of the CPU     */
/*  call the Scheduler                                                        */
/*                                                                            */
/*============================================================================*/
/* Includes */
/* -------- */

#include "stdtypedef.h"
#include "sysinit.h"
#include "mw_schm_cfg.h"
#include "mw_schm.h"


 
 /**************************************************************
 *  Name                 : main
 *  Description          : main program, initialize cpu and run aplication
 *  Parameters           : none
 *  Return               : none
 *  Critical/explanation : No
 **************************************************************/
 
int main( void ){
	/* ======================================== */
  	/*              INITIALIZATIONS             */
  	/* ======================================== */
  	
	/* Mode initializations */
	/* -------------------- */
	sysinit_InitMode();
	
	/* Clock initializations */
	/* --------------------- */
	sysinit_InitSysClock();
	
	/* Clock initializations */
	/* --------------------- */
    sysinit_TickInitCfg();

	/* Scheduler Initialization and tasks initialization  */
	/* ------------------------ */
    mw_schm_schInit();
    
	/* ======================================== */
  	/*             RUN APPLICATION              */
  	/* ======================================== */    
        
	/* Execute Scheduler */
	/* ----------------- */
    mw_schm_schExec();


}



