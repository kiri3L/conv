#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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
{   if (-523.67 < d )
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

int main(int argc, char *argv[])
{
    double temp; /* temperature value */
    char scale = 'N';  /* temperature scale */
	if ( argc < 2 ) 
	{
		printf("no arguments\n");
		return 1;
	}
    temp = atof(argv[1]);
    if ( argc == 3)
    scale = *argv[2];
 
    switch(scale)
    {
        case 'C':
            F_C(temp);
            break;
        case 'F':
            F_F(temp);
            break;
        case 'K':
            F_K(temp);
            break;
        case 'N':
           printf("%6.2f C: \n", temp );
           F_C(temp);

           printf("%6.2f F: \n", temp );
           F_F(temp);

           printf("%6.2f K: \n", temp );
           F_K(temp);

           break;
        default:
            printf("Enter C, F, K or Nothing\n ");

    }
    return 0;
}
