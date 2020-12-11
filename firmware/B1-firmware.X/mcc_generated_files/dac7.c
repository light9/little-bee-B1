/**
  DAC7 Generated Driver File

  @Company
    Microchip Technology Inc.

  @File Name
    dac7.c

  @Summary
    This is the generated driver implementation file for the DAC7 driver using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This source file provides APIs for DAC7.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.3
        Device            :  PIC16F1776
        Driver Version    :  2.10
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.20 and above
        MPLAB 	          :  MPLAB X 5.40
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

/**
  Section: Included Files
*/

#include <xc.h>
#include "dac7.h"

/**
  Section: DAC7 APIs
*/

void DAC7_Initialize(void)
{
    // DAC7EN enabled; NSS VSS; DAC7PSS VDD; OE1 enabled; OE2 disabled; 
    DAC7CON0 = 0xA0;
    // DAC7R 6; 
    DAC7CON1 = 0x06;
}

void DAC7_SetOutput(uint8_t inputData)
{
    DAC7CON1  = inputData;
}

uint8_t DAC7_GetOutput(void)
{
    return DAC7CON1;
}
/**
 End of File
*/
