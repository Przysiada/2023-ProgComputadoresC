#include <stdio.h>

void main() {
    FILE *arquivo = fopen("exemplo.txt", "r");
    char caracter;

    while ((caractere = fgetc(arquivo)) != EOF) {
        putchar(caractere);
    }

    rewind(arquivo);
    printf("\nLendo novamente a partir do inicio:\n");

    while ((caractere = fgetc(arquivo)) != EOF) {
        putchar(caractere);
    }

    fclose(arquivo);
}
