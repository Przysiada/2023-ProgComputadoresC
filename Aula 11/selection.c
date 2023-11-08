#include <stdio.h>

void main()
{
    int aux, i, j, min, *vetor;

    printf("Quantos numeros quer ordenar : ");
    scanf("%d" , &n);

    vetor = ( int * ) malloc( n * sizeof(int) );

    for ( i = 0 ; i < n ; i++ ) {
        printf("Numero %d = ", i);
        scanf("%d" , &vetor[i]);
    }

    for( i = 0 ; i < n ; i++ ){
        min = i;
        for( j = i+1 ; j < n ; j++ ) {
            if ( vetor[j] < vetor[min] )
                min = j;
        }
        aux = vetor[min];
        vetor[min] = vetor[i];
        vetor[i] = aux;
    }

    printf("Ordenado:\n");
    for ( i = 0 ; i < n ; i++ ) {
        printf("Posicao %d = %d\n", i, vetor[i]);
    }

    free(vetor);
}
