#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_PALAVRA 100

int contarOcorrencias(FILE *arquivo, char *palavra) {
    int contagem = 0;
    char buffer[TAMANHO_PALAVRA];

    while (fscanf(arquivo, "%s", buffer) == 1) {
        if (strcmp(buffer, palavra) == 0) {
            contagem++;
        }
    }

    return contagem;
}

int main() {
    FILE *arquivo = fopen("frases.txt", "r");
    int totalOcorrencias;
    char palavraBusca[TAMANHO_PALAVRA];

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    printf("Digite a palavra que deseja buscar: ");
    scanf("%s", palavraBusca);

    totalOcorrencias = contarOcorrencias(arquivo, palavraBusca);

    printf("A palavra '%s' aparece %d vezes no texto.\n", palavraBusca, totalOcorrencias);

    if (fclose(arquivo) == EOF) {
        printf("Erro ao fechar o arquivo");
        return 1;
    }

    return 0;
}
