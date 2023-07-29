#include <stdio.h>
/**
 * Shows how transfer of execution happens 
 * The outer loop executes once as the inner loop executes 10 times the return execution to the outer loop.
*/
int x, y;
int main( void )
{
    for ( x = 0; x < 10; x++)
    {
	printf( "\n" );
	for ( y = 0; y < 10; y++ ){
	    printf( "X");
	}
    }
    
return 0;
}
