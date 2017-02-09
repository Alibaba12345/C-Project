/**
 * pointers1.c
 */

#include <stdio.h>

int main()
{
    int x, y;
    int *p, *q;

    x = 5;
    y = 10;
    p = &x;
    q = &y;

    printf( "x = %d\n", x );
    printf( "y = %d\n", y );
    printf( "p = %p\n", p );
    printf( "q = %p\n", q );

    /* modify x & y using pointers */
    *p = 10;
    *q = 20;

    printf( "x = %d\n", x );
    printf( "y = %d\n", y );

    /* using *p & *q like int variables */
    *p = *p + 5;
    *q = *q - 5;

    printf( "x = %d\n", x );
    printf( "y = %d\n", y );

    (*p)++;
    (*q)--;

    printf( "x = %d\n", x );
    printf( "y = %d\n", y );

    //system( "pause" );
    return 0;
}
