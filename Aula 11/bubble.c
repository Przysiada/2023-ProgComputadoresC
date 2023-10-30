#include <stdio.h>

void main()
{
    int aux, i, j, n, *vetor;

    printf("Quantos numeros quer ordenar : ");
    scanf("%d" , &n);

    vetor = ( int * ) malloc( n * sizeof(int) );

    for ( i = 0 ; i < n ; i++ ) {
        printf("Numero %d = ", i);
        scanf("%d" , &vetor[i]);
    }
  
    for ( i = n-1 ; i > 0 ; i-- ) {
        for ( j = 0 ; j < i ; j++ ) {
            if ( vetor[j] > vetor[j+1] ) {
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }

    for ( i = 0 ; i < n ; i++ ) {
        printf("Posicao %d = %d\n", i, vetor[i]);
    }

    free(vetor);
}
