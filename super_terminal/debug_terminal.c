#include "driverlib.h"
#include "device.h"
#include <vsprintf.h>
#include "debug_terminal.h"
unsigned char *msg;

void DebugTerminalInit(void) {

    //
    // GPIO35 is the SCI Rx pin.
    //
    GPIO_setMasterCore(35, GPIO_CORE_CPU1);
    GPIO_setPinConfig(GPIO_35_SCIRXDA);
    GPIO_setDirectionMode(35, GPIO_DIR_MODE_IN);
    GPIO_setPadConfig(35, GPIO_PIN_TYPE_STD);
    GPIO_setQualificationMode(35, GPIO_QUAL_ASYNC);

    //
    // GPIO37 is the SCI Tx pin.
    //
    GPIO_setMasterCore(37, GPIO_CORE_CPU1);
    GPIO_setPinConfig(GPIO_37_SCITXDA);
    GPIO_setDirectionMode(37, GPIO_DIR_MODE_OUT);
    GPIO_setPadConfig(37, GPIO_PIN_TYPE_STD);
    GPIO_setQualificationMode(37, GPIO_QUAL_ASYNC);
    //
    // Initialize SCIA and its FIFO.
    //
    SCI_performSoftwareReset(SCIA_BASE);

    //
    // Configure SCIA for echoback.
    //
    SCI_setConfig(SCIA_BASE, 25000000, 115200, (SCI_CONFIG_WLEN_8 |
                                             SCI_CONFIG_STOP_ONE |
                                             SCI_CONFIG_PAR_NONE));
    SCI_resetChannels(SCIA_BASE);
    SCI_clearInterruptStatus(SCIA_BASE, SCI_INT_TXFF | SCI_INT_RXFF);
    SCI_enableFIFO(SCIA_BASE);
    SCI_enableModule(SCIA_BASE);
    SCI_performSoftwareReset(SCIA_BASE);
}
void puts(char *msg, unsigned char length)
{
    SCI_writeCharArray(SCIA_BASE, (uint16_t*)msg, length);
}
