#include <stdio.h>
#include <stdlib.h>

int contarPalavras(FILE *arquivo) {
    int contagem = 0, caractere, caractereAnterior = ' ';

    do {
        caractere = fgetc(arquivo);

        if (caractere == ' ' || caractere == '\n' || caractere == '\t' || caractere == EOF) {
            if (caractereAnterior != ' ' && caractereAnterior != '\n' && caractereAnterior != '\t') {
                contagem++;
            }
        }

        caractereAnterior = caractere;
    } while (caractereAnterior != EOF);

    return contagem;
}

int main() {
    FILE *arquivo = fopen("frases.txt", "r");
    int totalPalavras;

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    totalPalavras = contarPalavras(arquivo);

    printf("O arquivo contem %d palavras.\n", totalPalavras);

    if (fclose(arquivo) == EOF) {
        printf("Erro ao fechar o arquivo");
        return 1;
    }

    return 0;
}
