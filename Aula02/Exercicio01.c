#include <stdio.h>

int exponencialRecursivo ( int b , int e ) {
	if ( e == 1 ) {
		return b;
	}
	else
		return b * exponencialRecursivo( e - 1 );
}

void main()
{
	int base, expoente, resultado;

	printf( "Digite o valor do numero para a base = " );
	scanf( "%d" , &base );
  printf( "Digite o valor do numero para o expoente = " );
	scanf( "%d" , &expoente );

	resultado = exponencialRecursivo( base , expoente );

	printf( "\nO resultado = %d", resultado );
}
