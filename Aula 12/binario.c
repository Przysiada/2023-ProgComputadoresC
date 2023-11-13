#include <stdio.h>

int buscaBinaria(int *lista, int inicio, int fim, int chave) {
    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        if (lista[meio] == chave) {
            return meio;
        }
        else if (lista[meio] > chave) {
            fim = meio - 1;
        }
        else {
            inicio = meio + 1;
        }
    }
    return -1;
}

void main() {
    int numeros[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20}, buscado, resultado;

    printf("Digite o número que deseja buscar: ");
    scanf("%d", &buscado);

    resultado = buscaBinaria(numeros, 0, 9, buscado);

    if (resultado != -1) {
        printf("O elemento %d foi encontrado no índice %d.\n", buscado, resultado);
    } else {
        printf("O elemento %d não foi encontrado no array.\n", buscado);
    }
}
