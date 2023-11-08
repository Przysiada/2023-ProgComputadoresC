#include <stdio.h>

int main() {
    FILE *arquivo = fopen("exemplo.txt", "r");
		char linha[100];

    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    if (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("Linha lida do arquivo: %s", linha);
    } else {
        printf("Erro ao ler a linha do arquivo");
    }

    if (fclose(arquivo) == 0) {
        printf("\nArquivo lido com sucesso.\n");
				return 0;
    } else {
        printf("Erro ao fechar o arquivo");
				return 1;
    }
}
