#include <stdio.h>

/* strlen using pointer notation */
int strlen1(char str[]);

/* strlen using array notation */
int strlen2(char str[]);

int main(int argc, char *argv[])
{
    printf ( "strlen1(\"hello\") = %d\n", strlen1( "hello" ) );
    printf ( "strlen2(\"hello\") = %d\n", strlen2( "hello" ) );
   // system( "pause" );
    return 0;
}

/* strlen using pointer notation */
int strlen1(char str[])
{
    int size;

    for( size = 0; str[size] != '\0'; size++ )
    {
    }
    return size;

    /** alternate implementation
    while( str[size] != '\0' )
    {
        size++;
    }
    return size;
    */
}

/* strlen using array notation */
int strlen2(char str[])
{
    int  size = 0;
    char *ptr;

    for( ptr = &str[0]; *ptr != '\0'; ptr++ )
    {
        size ++;
    }
    return size;

    /** alternate implementation
    ptr = &str[0];
    while( *ptr != '\0' )
    {
        ptr++;
        size++;
    }
    return size;
    */
}

