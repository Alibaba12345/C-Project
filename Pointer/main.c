#include <stdio.h>
#include "function.h"

int main(void)
{
   int number = 5; /* initialize number */
   
   printf("The original value of nmber is %d", number);
   
   /* pass address of number to cubeByReference */
   cubeByReference(&number);
   
   printf("\nThe new value of number is %d\n", number);
   return 0;  /* idicates successful termination */

} /* end main */