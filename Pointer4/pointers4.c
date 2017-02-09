#include <stdio.h>

int main(int argc, char *argv[])
{
    char char_array[] = "Hello";
    int int_array[] = { 1, 2, 3};

    char c1, c2, c3;
    int x, y, z;

    char *char_ptr;
    int  *int_ptr;

    char_ptr = &char_array[0];
    int_ptr  = &int_array[2];

    c1 = *char_ptr;
    c2 = *(char_ptr+1);
    c3 = *(char_ptr+2);

    x = *int_ptr;
    y = *(int_ptr-1);
    z = *(int_ptr-2);

    printf ( "c1 = %c\n", c1 );
    printf ( "c2 = %c\n", c2 );
    printf ( "c3 = %c\n", c3 );

    printf ( "x = %d\n", x );
    printf ( "y = %d\n", y );
    printf ( "z = %d\n", z );

    //system( "pause" );
    return 0;
}

