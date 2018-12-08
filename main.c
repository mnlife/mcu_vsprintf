//#############################################################################
//
// FILE:   sci_ex3_interrupts_fifo.c
//
// TITLE:  SCI interrupt echoback example with FIFO.
//
//! \addtogroup driver_example_list
//! <h1>SCI Interrupt Echoback with FIFO</h1>
//!
//!  This test receives and echo-backs data through the SCI-A port
//!  via interrupts two characters at a time. A Rx interrupt is triggered
//!  after the FIFO status level is two or greater. Once two characters
//!  are in the RXFIFO, the SCI Rx ISR will be triggered and will read two
//!  characters from the FIFO and write them to the transmit buffer. The SCI
//!  Tx ISR will then be triggered again to request more data from the terminal.
//!
//!  A terminal such as 'putty' can be used to view the data from
//!  the SCI and to send information to the SCI. Characters received
//!  by the SCI port are sent back to the host.
//!
//!  \b Running \b the \b Application
//!  Open a COM port with the following settings using a terminal:
//!  -  Find correct COM port
//!  -  Bits per second = 9600
//!  -  Data Bits = 8
//!  -  Parity = None
//!  -  Stop Bits = 1
//!  -  Hardware Control = None
//!
//!  The program will print out a greeting and then ask you to
//!  enter two characters which it will echo back to the terminal.
//!
//!  \b Watch \b Variables \n
//!  - counter - the number of character pairs sent
//!
//! \b External \b Connections \n
//!  Connect the SCI-A port to a PC via a transceiver and cable.
//!  - GPIO28 is SCI_A-RXD (Connect to Pin3, PC-TX, of serial DB9 cable)
//!  - GPIO29 is SCI_A-TXD (Connect to Pin2, PC-RX, of serial DB9 cable)
//
//#############################################################################
// $TI Release: F28004x Support Library v1.05.00.00 $
// $Release Date: Thu Oct 18 15:43:57 CDT 2018 $
// $Copyright:
// Copyright (C) 2018 Texas Instruments Incorporated - http://www.ti.com/
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//
//   Redistributions of source code must retain the above copyright
//   notice, this list of conditions and the following disclaimer.
//
//   Redistributions in binary form must reproduce the above copyright
//   notice, this list of conditions and the following disclaimer in the
//   documentation and/or other materials provided with the
//   distribution.
//
//   Neither the name of Texas Instruments Incorporated nor the names of
//   its contributors may be used to endorse or promote products derived
//   from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// $
//#############################################################################

//
// Included Files
//
#include "driverlib.h"
#include "device.h"
#include <vsprintf.h>
extern void DebugTerminalInit(void);
#ifdef _FLASH
// These are defined by the linker (see device linker command file)
extern uint16_t RamfuncsLoadStart;
extern uint16_t RamfuncsLoadSize;
extern uint16_t RamfuncsRunStart;
#endif

//
// Defines
//
// Define AUTOBAUD to use the autobaud lock feature
//#define AUTOBAUD

//
// Globals
//
uint16_t counter = 0;

uint32_t debug_data[] = {
     0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004,
     0x00000005, 0x00000006, 0x00000007, 0x00000008, 0x00000009,
     0x0000000A, 0x0000000B, 0x0000000C, 0x0000000D, 0x0000000E,
     0x0000000F, 0x000000FF, 0x00000FFF, 0x0000FFFF, 0x000FFFFF,
     0x00FFFFFF, 0x0FFFFFFF, 0xFFFFFFFF, 0x12345678, 0x89ABCDEF
};

uint32_t cnt = 0;
uint32_t timer = 200000;
//
// Main
//
void main(void)
{
    //
    // Configure PLL, disable WD, enable peripheral clocks.
    //
    Device_init();

    //
    // Disable pin locks and enable internal pullups.
    //
    Device_initGPIO();

    //
    // Disable global interrupts.
    //
    DINT;

    //
    // Initialize interrupt controller and vector table.
    //
    Interrupt_initModule();
    Interrupt_initVectorTable();
    IER = 0x0000;
    IFR = 0x0000;

    DebugTerminalInit();

    //
    // Enable global interrupts.
    //
    EINT;
    int num = 0;
    for(;;)
    {
        cnt = timer;
        while (cnt--);
        printf("This is a printf test: %X\r\n", num % 0xF);
        num++;
    }
}



//
// End of File
//
