/**
 * pointers2.c
 */

#include <stdio.h>

/* incorrect version of the swap function */
void swap1(int x, int y);

/* correct version of the swap function */
void swap2(int *p, int *q);

int main()
{
    int x, y;
    x = 3;
    y = 4;

    printf( "main:  (x, y) = (%d, %d)\n", x, y );
    swap1( x, y );
    printf( "main:  (x, y) = (%d, %d)\n\n", x, y );

    printf( "main:  (x, y) = (%d, %d)\n", x, y );
    swap2( &x, &y );
    printf( "main:  (x, y) = (%d, %d)\n\n", x, y );

    //system( "pause" );

    return 0;
}

/* incorrect implementation of the swap function */
void swap1(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf( "swap1: (x, y) = (%d, %d)\n", x, y );
}

/* correct implementation of the swap function */
void swap2(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
    printf( "swap2: (x, y) = (%d, %d)\n", *p, *q );
}
