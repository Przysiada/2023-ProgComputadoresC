#include <stdio.h>

int main() {
    FILE *arquivo = fopen("exemplo.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    if (fclose(arquivo) == 0) {
        printf("Arquivo fechado com sucesso.\n");
    } else {
        printf("Erro ao fechar o arquivo");
    }

    return 0;
}
