#include <msp430.h>

int main(void)
{
  WDTCTL = WDTPW + WDTHOLD;                 // Stop watchdog timer
  P2DIR |= 0b00000001;                      // Set P2.0 to output

  for (;;)
  {
    volatile unsigned int i,j;
    P2OUT = 0b00000001;    ;          // Set P2.0 to HIGH
    for(i=0;i<1000;i++);
    P2OUT =0b00000000;                //  Set P2.0 to LOW
    for(i=0;i<1000;i++);
  }
}
