#include <stdio.h>

int fatorialRecursivo ( int n ){
	if ( n == 0 ) {
		return 1;
	}
	else
		return n * fatorialRecursivo( n - 1 );
}

void main()
{
	int n, multiplicacao;

	printf( "Digite o valor do numero para o fatorial = " );
	scanf( "%d" , &n );

	multiplicacao = fatorialRecursivo( n );

	printf( "\nO valor da soma = %d", multiplicacao );
}
