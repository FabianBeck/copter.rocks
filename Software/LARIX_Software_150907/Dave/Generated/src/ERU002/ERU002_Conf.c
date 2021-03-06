/*******************************************************************************
**  DAVE App Name : ERU002       App Version: 1.0.14               
**  This file is generated by DAVE, User modification to this file will be    **
**  overwritten at the next code generation.                                  **
*******************************************************************************/


/*CODE_BLOCK_BEGIN[ERU002_Conf.c]*/
/*******************************************************************************
 Copyright (c) 2014, Infineon Technologies AG                                 **
 All rights reserved.                                                         **
                                                                              **
 Redistribution and use in source and binary forms, with or without           **
 modification,are permitted provided that the following conditions are met:   **
                                                                              **
 *Redistributions of source code must retain the above copyright notice,      **
 this list of conditions and the following disclaimer.                        **
 *Redistributions in binary form must reproduce the above copyright notice,   **
 this list of conditions and the following disclaimer in the documentation    **
 and/or other materials provided with the distribution.                       **
 *Neither the name of the copyright holders nor the names of its contributors **
 may be used to endorse or promote products derived from this software without** 
 specific prior written permission.                                           **
                                                                              **
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"  **
 AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE    **
 IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE   **
 ARE  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE   **
 LIABLE  FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR         **
 CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF         **
 SUBSTITUTE GOODS OR  SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS    **
 INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN      **
 CONTRACT, STRICT LIABILITY,OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)       **
 ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE   **
 POSSIBILITY OF SUCH DAMAGE.                                                  **
                                                                              **
 To improve the quality of the software, users are encouraged to share        **
 modifications, enhancements or bug fixes with Infineon Technologies AG       **
 dave@infineon.com).                                                          **
                                                                              **
********************************************************************************
**                                                                            **
**                                                                            **
** PLATFORM : Infineon XMC4000 Series/XMC1000 series                          **
**                                                                            **
** COMPILER : Compiler Independent                                            **
**                                                                            **
** AUTHOR   : App Developer                                                   **
**                                                                            **
** MAY BE CHANGED BY USER [yes/no]: Yes                                       **
**                                                                            **
**                                                                            **
*******************************************************************************/
/**
 * @file   ERU002_Conf.c
 *
 * Revision History
 * 25 Jan 2013 v1.0.4 Initial Version
 * 14 Mar 2013 v1.0.6 Porting to XMC42xx and XMC44xx
 * 15 Nov 2013 v1.0.12 Coding guidelines followed.
 *
 * @brief  Configuration file generated based on UI settings 
 *         of ERU002 App
 *
 */

/*******************************************************************************
 ** INCLUDE FILES                                                             **
 ******************************************************************************/
#include "../../inc/ERU002/ERU002.h"
/**
 * @ingroup ERU002_publicparam
 * @{
 */



const ERU002_HandleType ERU002_Handle0 = {
  /* Mapped ERU Unit */
  .ERURegs      = ERU1, 
  /* InputChannel  */
  .OutputChannel = (uint8_t)0,
  
  .GP_Value = 1,
  
  .GEEN_Value = 0
};

const ERU002_HandleType ERU002_Handle1 = {
  /* Mapped ERU Unit */
  .ERURegs      = ERU1, 
  /* InputChannel  */
  .OutputChannel = (uint8_t)3,
  
  .GP_Value = 1,
  
  .GEEN_Value = 0
}; 

const ERU002_HandleType * ERU002_HandleArray[ERU002_NUM_INSTANCES] =
{
   &ERU002_Handle0, 
   &ERU002_Handle1 

};

/**
 * @}
 */
/*CODE_BLOCK_END*/

