#include <stdio.h>

int main ( void ) 
{
	int i;
	int *p = &i;

	printf( "End %d\n" , p );
	p++;
	printf( "End %d\n" , p );

	return 0;
}
