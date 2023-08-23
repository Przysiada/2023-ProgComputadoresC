#include <stdio.h>

int main ( void ) 
{
	int i, *pi = &i;
	long int l, *pl = &l;
	double d, *pd = &d;
	char c , *pc = &c;

	printf( "End int = %d\n" , pi );
	printf( "End long = %d\n" , pl );
	printf( "End double = %d\n" , pd );
	printf( "End char = %d\n" , pc );
	pi++;
	pl++;
	pd++;
	pc++;
	printf( "End int = %d\n" , pi );
	printf( "End long = %d\n" , pl );
	printf( "End double = %d\n" , pd );
	printf( "End char = %d\n" , pc );

	return 0;
}
