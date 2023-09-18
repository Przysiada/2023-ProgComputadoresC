void fatorialReferenciaCorreto( int *n ) {
    int temp, resultado = 1;

    if ( *n > 1 ) {
        temp = *n - 1;
        fatorialReferenciaCorreto( &temp );
        resultado = ( *n ) * temp;
    }
    *n = resultado;
}

void main()
{
	int n = 5;
	fatorialReferenciaCorreto( &n );

	printf("Fatorial = %d", n);
}
