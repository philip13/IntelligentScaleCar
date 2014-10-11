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
/* DESCRIPTION : Main Scheduler File                                          */
/*============================================================================*/
/* FUNCTION COMMENT : Main scheduler file with initailization and manager     */
/*                                                                            */
/*                                                                            */
/*============================================================================*/


/******************************************************************************
*   Include Files
******************************************************************************/ 
#include    "mw_schm.h" 
#include    "mw_schm_trm_isr.h" 
#include    "mw_schm_cfg.h" 
#include    "hw_interrupt.h"


/******************************************************************************
*   Local Macro Definitions
******************************************************************************/ 

/******************************************************************************
*   Local Type Definitions
******************************************************************************/

/******************************************************************************
*   Local Function Declarations
******************************************************************************/ 

/******************************************************************************
*   Global Variable Definitions
******************************************************************************/
    T_OpModeType  ruw_curOpMode;

/******************************************************************************
*   Static Variable Definitions
******************************************************************************/

/******************************************************************************
*   Global and Static Function Definitions
******************************************************************************/ 

/***************************************************************************
 * Function:    schInit
 *
 * Description: Main function of Scheduler module
 *
 * Returns:
 *
 * Notes:
 *
 **************************************************************************/ 
void mw_schm_schInit( void )
{
    E_MODULES_ID_TYPE le_mngIndex;

    /* clear timer interrupt flag */
    re_mngExecflag = SCHM_FALSE;

    /* Disable Interrupt */
    hw_interrupt_Disable_Interrupts();

    /* Call Init function of modules */
    for (le_mngIndex = (E_MODULES_ID_TYPE)0; le_mngIndex < SCHD_MANAGERS_NUMBER; le_mngIndex++)
    { 
        if (cps_mngTaskList[le_mngIndex].ManagerInitAPI != SCHM_NULL_PTR)
        {
            cps_mngTaskList[le_mngIndex].ManagerInitAPI();    
        }
    }

	hw_interrupt_interrupt_initCfg();

    /* Enable Interrupt */
    hw_interrupt_Enable_Interrupts();

    ruw_curOpMode = 0x01;

}

/***************************************************************************
 * Function:    schExec
 *
 * Description: Main function of Scheduler module
 *
 * Returns:
 *
 * Notes:
 *
 **************************************************************************/ 
void mw_schm_schExec( void )
{
    E_MODULES_ID_TYPE le_mngIndex;
    T_DelayMainType lasw_MngTimeCnt[SCHD_MANAGERS_NUMBER];    

    /* Initialization of local modules counters to delay of module execution from Scheduler start */
    for (le_mngIndex = (E_MODULES_ID_TYPE)0; le_mngIndex < SCHD_MANAGERS_NUMBER; le_mngIndex++)
    {
        lasw_MngTimeCnt[le_mngIndex] = (T_DelayMainType)cps_mngTaskList[le_mngIndex].StartUpDelay;    
    }  
    
    do
    {
        /* wait for timer interrupt */
        if (re_mngExecflag)
        {
            /* clear timer interrupt flag */
            re_mngExecflag = SCHM_FALSE;
            /* check each module from the list of modules */
            for (le_mngIndex = (E_MODULES_ID_TYPE)0; le_mngIndex < SCHD_MANAGERS_NUMBER; le_mngIndex++)
            {
                if (cps_mngTaskList[le_mngIndex].ManagerAPI != SCHM_NULL_PTR)
                {
                    /* decrement the local counter of modules  */
                    lasw_MngTimeCnt[le_mngIndex] -= TIMER_PERIOD;    
                    /* check whether counter is expired */
                    if (lasw_MngTimeCnt[le_mngIndex] <= 0)
                    {
                        /* set the local module counter */
                        lasw_MngTimeCnt[le_mngIndex] = (T_DelayMainType)cps_mngTaskList[le_mngIndex].ExecutionPeriod;
                        /* check whether the module starts for the currecnt Mode */
                        if (0 != (cps_mngTaskList[le_mngIndex].UsedInMode & ruw_curOpMode))
                        {
                            cps_mngTaskList[le_mngIndex].ManagerAPI();    
                        }
                    }
                }
            }  
        }
    }
    while (SCHM_TRUE);

    return;
}
