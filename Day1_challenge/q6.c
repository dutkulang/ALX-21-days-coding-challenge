#include <stdio.h>
/**
the program will print empty spaces SOH
*/
int x, y;
int main( void )
{
    for ( x = 0; x < 10; x++)
    {
	printf( "\n" );
	for ( y = 0; y < 10; y++ ){
	    // printf( "X");
	    printf( "%c", 1 );
	}
    }
    
return 0;
}
