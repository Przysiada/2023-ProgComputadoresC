#include <stdio.h>

int main() {
		int numeros[5], numElementos, elementosLidos, i;    
		FILE *arquivo = fopen("dados.bin", "rb");
		
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    numElementos = sizeof(numeros) / sizeof(numeros[0]);
    elementosLidos = fread(numeros, sizeof(int), numElementos, arquivo);

    if ( elementosLidos == numElementos ) {
        printf("Dados binários lidos com sucesso do arquivo:\n");
        for (i = 0; i < numElementos; i++) {
            printf("%d\n", numeros[i]);
        }
    } 
		else {
        printf("Erro ao ler dados do arquivo");
    }

    if ( fclose(arquivo) == 0 ) {
        printf("Arquivo fechado com sucesso.\n");
    } else {
        printf("Erro ao fechar o arquivo");
    }

    return 0;
}
