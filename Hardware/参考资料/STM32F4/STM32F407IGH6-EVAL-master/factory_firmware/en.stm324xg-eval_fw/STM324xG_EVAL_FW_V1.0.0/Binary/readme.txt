/**
  @page STM324xG_EVAL_Binary   STM324xG-EVAL demonstration readme file

  @verbatim
  ******************** (C) COPYRIGHT 2011 STMicroelectronics *******************
  * @file    readme.txt 
  * @author  MCD Application Team
  * @version V1.0.0
  * @date    05-September-2011
  * @brief   Description of the STM324xG-EVAL demonstration firmware's binary files.
  ******************************************************************************
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  ******************************************************************************
   @endverbatim


@par Description

This directory contains binary files (*.hex and *.dfu) of the STM324xG-EVAL board RevB
demonstration firmware.
You can use the STM32F4xx’s embedded Bootloader or any in-system programming tool
to reprogram this application, as described below:

 + Using "in-system programming tool"
    - Connect the board through JTAG probe to your preferred in-system programming tool
    - Use "STM324xG_EVAL_FW_V1.0.0.hex" file to reprogram the demonstration firmware 
    
    Note: You can use the embedded ST-LINK/V2 HW with STM32 ST-LINK Utility software,
          available for download from www.st.com, to program your board.
 
 + Using the embedded Bootloader
    - Configure the board to boot from "System Memory" (boot pins BOOT0:1 / BOOT1:0)
    - Depending on the Bootloader serial interface you are using, you have to proceed as follows:
       - For USART or CAN interfaces, you have to use "STM324xG_EVAL_FW_V1.0.0.hex" file
       - For USB FS Device mode (DFU) interface, you have to use "STM324xG_EVAL_FW_V1.0.0.dfu" file
    - Once the binary is programmed, configure boot pins in "Boot from Flash" position 
      and restart the board

      For more information about the STM32F4xx Bootloader, please refer to "AN2606 
      STM32 microcontroller system memory boot mode."

 * <h2><center>&copy; COPYRIGHT 2011 STMicroelectronics</center></h2>
 */
