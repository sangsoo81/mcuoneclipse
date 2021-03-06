/** ###################################################################
**     Filename    : ProcessorExpert.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2012-10-04, 09:56, # CodeGen: 0
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/* MODULE ProcessorExpert */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "WAIT1.h"
#include "UTIL1.h"
#include "FAT1.h"
#include "TmDt1.h"
#include "SD1.h"
#include "SS1.h"
#include "FRTOS1.h"
#include "RTOSTRC1.h"
#include "Ptrc1.h"
#include "RTOSCNTRLDD1.h"
#include "RTOSTICKLDD1.h"
#include "SPI2.h"
#include "Clock1.h"
#include "BitIoLdd1.h"
#include "Input1.h"
#include "BitIoLdd2.h"
#include "Output1.h"
#include "BitIoLdd3.h"
#include "I2C2.h"
#include "SDA1.h"
#include "BitIoLdd4.h"
#include "SCL1.h"
#include "BitIoLdd5.h"
#include "TRG1.h"
#include "EVNT1.h"
#include "CLS1.h"
#include "AS1.h"
#include "ASerialLdd1.h"
#include "S191.h"
#include "RNG1.h"
#include "RNG2.h"
#include "ACCEL1.h"
#include "AD1.h"
#include "AdcLdd1.h"
#include "MMA1.h"
#include "GI2C1.h"
#include "I2C3.h"
#include "SM1.h"
#include "TMOUT1.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

/* User includes (#include below this line is not maintained by Processor Expert) */
#include "application.h"

/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  APP_Run();

  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END ProcessorExpert */
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.0 [05.03]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
