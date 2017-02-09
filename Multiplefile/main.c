#include <stdio.h>
#include "function.h"

void print_array(int a[], int num_elements);

int main(void)
{
   int a[10] = {10,90, 44, 87, 20, 55, 71, 62, 33, 5};
   int max;
   int min;

   printf("\nArray:\n");
   print_array(a, 10);

   max = max_array(a, 10);
   printf("The max element is %d\n", max);
   
   min = min_array(a, 10);
   printf("The min element is %d\n", min);
}


void print_array(int a[], int num_elements)
 {
   int i;
   for(i=0; i<num_elements; i++)
   {
	 printf("%d ", a[i]);
   }
   printf("\n");
 }