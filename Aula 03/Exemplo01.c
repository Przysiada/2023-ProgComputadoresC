#include <stdio.h>

int main( void ) {
    int *pointer;
    int x = 200;

    pointer = &x;
    printf( "Endereco que pointer aponta : %i \n", pointer );
    printf( "Endereco de pointer : %i \n", &pointer );
    printf( "Valor do endereco que pointer aponta : %i \n", *pointer );
    printf( "Endereco de x : %i \n", &x );

    return 0;
}
