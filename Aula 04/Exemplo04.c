#include <stdio.h>

void main() 
{
	int x;
	int *ponteiro = NULL; // ponteiro nulo
	
	if ( !ponteiro ) {
		printf( "1 - Ponteiro nulo, impossivel usar" );
	}
	if ( ponteiro ) {
		printf( "1 - Ponteiro nao nulo, possivel usar" );
	}
	
	ponteiro = &x; // Ponteiro válido
	
	if ( !ponteiro ) {
		printf( "2 - Ponteiro nulo, impossivel usar" );
	}
	if ( ponteiro ) {
		printf( "2 - Ponteiro nao nulo, possivel usar" );
	}
}
