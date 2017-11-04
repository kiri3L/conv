#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_F.h"



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
