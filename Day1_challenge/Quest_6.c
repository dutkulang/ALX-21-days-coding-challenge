#include <stdio.h>
/**
 * main - This program shows how the transfer
 * of action in a nested loop works
 *
 * Return: 0 successful
 */


int main( void )
{
	int x, y;

	for ( x = 0; x < 10; x++)
	{
		for ( y = 0; y < 10; y++ )
		{
			printf("%c", 1 );//printf( "X" );
		}
		/* "printf("%c", 1);*/ printf("\n");
	}

	return 0;
}
