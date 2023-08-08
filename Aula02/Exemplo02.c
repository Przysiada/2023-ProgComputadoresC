#include <stdio.h>

int somaIntervalo ( int m, int n ){
	if ( n == m ) {
		return m;
	}
	else if ( m < n ) {
		return somaIntervalo( m , n - 1 ) + n;
	}
	else{
		return somaIntervalo( m , n + 1 ) + n;
	}
}

void main()
{
	int n, m, soma;

	printf( "Digite o valor do numero N = " );
	scanf( "%d" , &n );
	printf( "Digite o valor do numero M = " );
	scanf( "%d" , &m );

	soma = somaIntervalo( n , m );

	printf( "O valor da soma = %d", soma );
}
