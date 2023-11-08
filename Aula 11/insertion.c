#include <stdio.h>

void main()
{
    int aux, i, j, *vetor;

    printf("Quantos numeros quer ordenar : ");
    scanf("%d" , &n);

    vetor = ( int * ) malloc( n * sizeof(int) );

    for ( i = 0 ; i < n ; i++ ) {
        printf("Numero %d = ", i);
        scanf("%d" , &vetor[i]);
    }

    for( i = 1 ; i < n ; i++ ) {
        aux = vetor[i];
        j = i - 1;
        while ( aux < vetor[j] ) { 
            vetor[j+1] = vetor[j];
            j--;
            if( j < 0 ) break;
        }
        vetor[j+1] = aux;
    }

    printf("Ordenado:\n");
    for ( i = 0 ; i < n ; i++ ) {
        printf("Posicao %d = %d\n", i, vetor[i]);
    }

    free(vetor);
}
