#include <stdio.h>
/**
   program asks for radius then  calculates the Area 
 */

int radius, area;
int main( void )
{
printf("Enter radius (i.e. 10): ");
scanf( "%d", &radius );
area = (int) (3.14159 * radius * radius);
printf( "\n\nArea = %d\n", area );
return 0;
}
