#include <stdio.h>
/**
 * main - asks the user for a radius and then uses it to find area
 *
 * Return: 0 successful
 */

int radius, area;

int main( void )
{
	printf( "Enter radius (i.e. 10): " );
	scanf( "%d", &radius );
	area = (int) (3.14159 * radius * radius);
	printf( "\n\nArea = %d\n", area );
	return 0;
}
