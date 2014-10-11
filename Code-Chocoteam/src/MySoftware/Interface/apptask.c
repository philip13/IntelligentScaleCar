/*============================================================================*/
/*                          The Freescale Cup                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* C Source:         apptask.c%
* %version:         1 %
* %created_by:      Continental %
* %date_created:     %
*=============================================================================*/
/* DESCRIPTION :  All tasks are called here                                   */
/*============================================================================*/
/* FUNCTION COMMENT : Add here your tasks, inside a periodic task             */
/* according to the desired execution period                                  */
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

#include "HALLeds.h"

/* Exported functions prototypes */
/* ----------------------------- */
void apptask_28us(void);
void apptask_28usd(void);
void apptask_56us(void);
void apptask_56us(void);
void apptask_pxRead(void);
void apptask_1ms(void);

void apptask_14ms(void);



/*Variables */
static T_ULONG pixels_camara[128];
bool capture_pixel= FALSE;
static T_UBYTE POSTN=0;


 int velocity1 = 80;    	//40 10 % ancho de pulso 
 int direction1 = 625;		//  625 90 grados pocision del servo
   	//490turn-left  720 turn-right
 

/**************************************************************
 *  Name                 : apptask_28us
 *	ID					 : TASK_28US
 *  Description          : 
 *  Parameters           :  none
 *  Return               :	none
 *  Critical/explanation :  no
 **************************************************************/

 void apptask_28us(void){
 			/*
	static T_UWORD lub_28us_counter =1;
 	inicio: 	
 	
 	//Run every 40 ms (20ms task x 2)
 	if(lub_28us_counter <=53){//53 centro, derecha 64, izquierda 
 	 	
 	 		
 	 	
 		//APPLeds_Led1_app();
 		Set_Led3_State(LED_ON);
 	}
 	else{
 			Set_Led3_State(LED_OFF);
 	}
 	
 	if(lub_28us_counter == 2510){
 		Set_Led3_State(LED_OFF);
 		lub_28us_counter= 1;
 		goto inicio;
 	}
 	
		 
	lub_28us_counter++;
 */
 
 			
 }
 
 /**************************************************************
 *  Name                 : apptask_28usd
 *	ID					 : TASK_1MS
 *  Description          : SI CAMARA
 *  Parameters           :  none
 *  Return               :	none
 *  Critical/explanation :  no
 **************************************************************/
 void apptask_28usd(void) {
		
	static T_UWORD lub_28us_counter =1;
 	inicio: 	
 	
 	/*Run every 40 ms (20ms task x 2)*/
 	if((lub_28us_counter ==2)||(lub_28us_counter ==3)){
 	 	
 	 		/*Toggle Led 1 every 40ms*/
 	 	
 		//APPLeds_Led1_app();
 		Set_Led1_State(LED_ON);
 	}
 	else{
 			Set_Led1_State(LED_OFF);
 	}
 	
 	if(lub_28us_counter == 599){
 		Set_Led1_State(LED_OFF);
 		lub_28us_counter= 1;
 		goto inicio;
 	}
 	
		 
	lub_28us_counter++;
 }
 
   /**************************************************************
 *  Name                 : apptask_56us
 *	ID					 : TASK_56US
 *  Description          :Signal CK CAMARA
 *  Parameters           :  none
 *  Return               :	none
 *  Critical/explanation :  no
 **************************************************************/
 void apptask_56us(void){
 	
 	static T_UWORD lub_28us_counter1 =1;
 	inicio: 	
 	
 	/*Run every 40 ms (20ms task x 2)*/
 	
 	if((lub_28us_counter1!=1)&&(lub_28us_counter1<=258)){
 	
 		/*Toggle Led 1 every 40ms*/
 		APPLeds_Led2_app();
 	}
 	else{
 			Set_Led2_State(LED_OFF);
 	}
 	
 	if(lub_28us_counter1 == 300){
 	
 		lub_28us_counter1= 1;
 		goto inicio;
 	}
 	
		 
	lub_28us_counter1++;
 
 
 

 }
 
    /**************************************************************
 *  Name                 : apptask_112us
 *	ID					 : TASK_112US
 *  Description          :pixel read
 *  Parameters           :  none
 *  Return               :	none
 *  Critical/explanation :  no
 **************************************************************/
 void apptask_pxRead(void){
 //128 pixeles por leer 
 //total de cuentas 150
	static T_UWORD pixel_112us_counter =1;
	static T_UWORD pixel_array_counter =0;
 	inicio: 	
 	
 	/****************/
 	
 	if((pixel_112us_counter!=1)&&(pixel_112us_counter<=258)&&((pixel_112us_counter%2)==0)){
 	
 		pixels_camara[pixel_array_counter]=(T_ULONG)(Read_adc_State());
 		pixel_array_counter++;
 	}
 	if( pixel_112us_counter ==259){
			 capture_pixel= TRUE;		 		
 	}
 	
 	if(pixel_112us_counter == 300){
 	
 		pixel_112us_counter= 1;
 		pixel_array_counter =0;
 		goto inicio;
 	}
 	
		 
	pixel_112us_counter++;
 

 		

 }
 
 
  
/**************************************************************
 *  Name                 : apptask_5ms
 *	ID					 : TASK_5MS
 *  Description          :
 *  Parameters           :  none
 *  Return               :	none
 *  Critical/explanation :  no
 **************************************************************/
 void apptask_1ms(void)
 {
		initEMIOS_0chX(pin_PA6, velocity1);
		initEMIOS_0chX(pin_PA7, velocity1);
		initEMIOS_0chX(pin_PA9, direction1);	
 }
 
 
 
 /**************************************************************
 *  Name                 : apptask_14ms
 *	ID					 : TASK_14MS
 *  Description          :
 *  Parameters           :  none
 *  Return               :	none
 *  Critical/explanation :  no
 **************************************************************/
 void apptask_14ms(void){
 
 static T_UBYTE y=10;
 static T_UBYTE width=0;
 
 
		if(capture_pixel== TRUE){
			T_UBYTE x=10;
			for(x; x<129;x++)
			{
				if(	pixels_camara[x]<=800)
				{
					y= (T_UBYTE)x;
					width++;	
				}
				if(x==128){
					
						if((width<=15) && (width >=7))
						{
							POSTN=(y-(width/2));
						}
							if(width>=20)
						{
								POSTN=64;
						}
				width=0;		
				}
			
			}
		
			
			
		}
			
 }
