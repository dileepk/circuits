//series led blinking p1.0,p1.1,p1.2,p1.3//
#include<msp430.h>
void main()
{
int i=1,j=30000;
while(1)
{
while(i<=8)
{
P1DIR=i;
P1OUT=i;
i=(i<<1);
while(j--);
j=30000;
}
i=1;
}
}
