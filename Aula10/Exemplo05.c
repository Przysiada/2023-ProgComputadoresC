#include <stdio.h>

int main() {
    FILE *arquivo = fopen("exemplo.txt", "r");
		int caracter;

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    while ((caractere = fgetc(arquivo)) != EOF) {
        putchar(caracter);
    }

    if (fclose(arquivo) == 0) {
        printf("\nArquivo lido com sucesso.\n");
				return 0;
    } else {
        printf("Erro ao fechar o arquivo");
				return 1;
    }    
}
