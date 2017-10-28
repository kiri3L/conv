#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void F_C(double d) /* the function takes a temperature value in degrees Celsius.
 The function then displays on the screen temperature value to Fahrenheit and Kelvin */
{  if ((d+273.15)> 0){
    printf("%6.2f F \n",(9.0/5.0)*d +32);
    printf("%6.2f K \n\n",d+273.15);
}
    else
        printf("K<0 !!!\n");
}
void F_F(double d) /* the function takes a temperature value in degrees Fahrenheit
The function then displays the value of temperature in Celsius and Kelvin */
{
    if (((5.0/9.0)*(d - 32) + 273.15)>0){
    printf("%6.2f C \n",(5.0/9.0)*(d - 32));
    printf("%6.2f K \n\n",(5.0/9.0)*(d - 32) + 273.15);
    }
   else
       printf("K<0 !!!\n");
}
void F_K(double d) /* the function takes a temperature value in degrees Kelvin
The function then displays the value of temperature in Celsius and Fahrenheit */
{
    if (d>0){
    printf("%6.2f C \n", d - 273.15);
    printf("%6.2f F \n\n", (9.0/5.0)*(d - 273.15) + 32 );
   }
    else
       printf("K<0 !!!\n");
}

int main(int argc, char *argv[])
{
    double temp; // temperature value
    char scale = 'N';  // temperature scale
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
            printf("Enter C, F, K or Nothing ");

    }
    return 0;
}
