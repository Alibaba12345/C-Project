#include <stdio.h>
#include <string.h>


int main(void)
{

   char s1[20] = "Hello ";
   char s2[] = " World ";
   char s3[40] = "";
   
   
   printf( "string1 = %s\nstring2 = %s\n", s1, s2);
   
   
   printf("strcat(s1, s2) = %s\n", strcat(s1, s2));
   
   printf( "strncat(s3, s2, 6) = %s\n", strncat( s3, s2, 6 ));


    return 0;
}