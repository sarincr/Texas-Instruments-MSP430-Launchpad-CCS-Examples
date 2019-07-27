#include <msp430.h>

int main(void)
{
  WDTCTL = WDTPW + WDTHOLD;                 // Stop watchdog timer
  P2DIR |= 0x01;                            // Set P2.0 to output

  for (;;)
  {
    volatile unsigned int i,j;
    P2OUT = 0x01;                          // Set P2.0 to HIGH
    for(i=0;i<1000;i++);
    P2OUT = 0x00;                          //  Set P2.0 to LOW
    for(i=0;i<1000;i++);
  }
}
