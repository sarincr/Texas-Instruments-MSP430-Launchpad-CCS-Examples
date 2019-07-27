#include <msp430.h>

int main(void)
{
  WDTCTL = WDTPW + WDTHOLD;                 // Stop watchdog timer
  P2DIR |= 0x01;                            // Set P2.0 to output direction

  for (;;)
  {
    volatile unsigned int i;

    P2OUT ^= 0x01;                          // Toggle P2.0 using exclusive-OR

    i = 5000;                              // Delay
    do (i--);
    while (i != 0);
  }
}
