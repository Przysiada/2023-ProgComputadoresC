#include <stdio.h>

int main() {
    FILE *arquivo = fopen("exemplo.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    fclose(arquivo);
    return 0;
}
