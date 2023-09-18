#include <stdio.h>

void main()
{
	float v[] = {1.0, 2.0, 3.0, 4.0, 5.0};
	int i;

	for ( i = 0 ; i < 5 ; i++ ) {
		printf( "%.1f " , v[i];
	}
	
	for ( i = 0 ; i < 5 ; i++ ) {
		printf( "%.1f " , *(v+i) );
	}
}
