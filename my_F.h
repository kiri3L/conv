#include <stdio.h>
#include <stdlib.h>


void F_C(double d) /* the function takes a temperature value in degrees Celsius.
 The function then displays on the screen temperature value to Fahrenheit and Kelvin */
{ 
	if (-273.15 < d)
	{
      printf("%6.2f F \n",(9.0/5.0)*d +32);
      printf("%6.2f K \n",d+273.15);
	}
	else printf("TI GLYPIJ, K < 0 \n");
}
void F_F(double d) /* the function takes a temperature value in degrees Fahrenheit
The function then displays the value of temperature in Celsius and Kelvin */
{   if (-459.67 < d )
	{
      printf("%6.2f C \n",(5.0/9.0)*(d - 32));
      printf("%6.2f K \n",(5.0/9.0)*(d - 32) + 273.15);
	}
	else printf("TI GLUPIJ, K < 0 \n");
}
void F_K(double d) /* the function takes a temperature value in degrees Kelvin
The function then displays the value of temperature in Celsius and Fahrenheit */
{   if ( 0 < d)
	{
    printf("%6.2f C \n", d - 273.15);
    printf("%6.2f F \n", (9.0/5.0)*(d - 273.15) + 32 );
	}
	else printf("TI GLUPIJ, K < 0 \n");
}

