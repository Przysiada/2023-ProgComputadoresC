#include <stdio.h>

int main() {
    int numeros[] = {42, 13, 7, 101, 99}, elementosEscritos, numElementos;
		FILE *arquivo = fopen("dados.bin", "wb");
		

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo");
        return 1;
    }

		numElementos = sizeof(numeros) / sizeof(numeros[0]);
    elementosEscritos = fwrite(numeros, sizeof(int), numElementos , arquivo);

    if ( elementosEscritos == numElementos ) {
        printf("Dados binários escritos com sucesso no arquivo.\n");
    } else {
        printf("Erro ao escrever dados no arquivo");
    }

    if ( fclose(arquivo) == 0 ) {
        printf("Arquivo fechado com sucesso.\n");
    } else {
        printf("Erro ao fechar o arquivo");
    }

    return 0;
}
