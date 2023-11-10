#include <stdio.h>

int buscaSequencial(int *lista, int tamanho, int chave) {
	  int i;
		for (i = 0; i < tamanho; i++) {
        if (lista[i] == alvo) {
            return i;
        }
    }
    return -1;
}

void main() {
    int numeros[] = {20, 5, 15, 24, 67, 45, 1, 76, 21, 11}, buscado, resultado;

    printf("Digite o número que deseja buscar: ");
    scanf( "%d", &buscado );

    resultado = buscaSequencial( numeros, 10, buscado );

    if ( resultado != -1 ) {
        printf("O elemento %d foi encontrado no índice %d.\n", alvo, resultado);
    } else {
        printf("O elemento %d não foi encontrado na lista.\n", alvo);
    }
}
