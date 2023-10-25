#include <stdio.h>

int main() {
    FILE *arquivo = fopen("exemplo.txt", "w");
		char caracter = 'A';

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    if (fputc(caractere, arquivo) != EOF) {
        printf("Caractere escrito com sucesso no arquivo.\n");
    } else {
        printf("Erro ao escrever o caractere no arquivo");
    }

    if (fclose(arquivo) == 0) {
        printf("\nArquivo lido com sucesso.\n");
				return 0;
    } else {
        printf("Erro ao fechar o arquivo");
				return 1;
    }
}
