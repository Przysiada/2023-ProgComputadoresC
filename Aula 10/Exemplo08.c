#include <stdio.h>

int main() {
    FILE *arquivo = fopen("exemplo.txt", "w");
		const char *texto = "Esta é uma linha de exemplo.";

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    if (fputs(texto, arquivo) != EOF) {
        printf("String escrita no arquivo com sucesso.\n");
    } else {
        printf("Erro ao escrever a string no arquivo");
    }

    if (fclose(arquivo) == 0) {
        printf("\nArquivo lido com sucesso.\n");
				return 0;
    } else {
        printf("Erro ao fechar o arquivo");
				return 1;
    }
}
