#include <stdio.h>

int somaNumeros ( int n )
{
	if ( n <= 1 ) {
		return n;
	}
	else {
		return (n + somaNumeros( n - 1) );
	}
}

void main()
{
	int n, soma;

	printf( "Digite o valor do numero a ser somado = ");
	scanf( "%d" , &n );

	soma = somaNumeros(n);

	printf( "\nO valor da soma = %d", soma);
}
