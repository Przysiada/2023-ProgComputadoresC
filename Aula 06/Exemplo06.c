#include <stdio.h>

void hanoi (char a, char b, char c, int discos)
{
	if( n == 1 ) {
		printf("\n%s%c%s%c", "move disco 1 da estaca ", A, " p/ a estaca ", B);
		return;
	}
	towers( n-1 , A , C , B );
	printf("\n%s%d%s%c%s%c", "move disco", n, "da estaca", A, "p/ a estaca", B);
	towers( n-1 , C , B , A );
}

void main()
{
	int n;
	scanf("%d", &n);
	hanoi ( 'A' , 'B' , 'C' , n );
}
