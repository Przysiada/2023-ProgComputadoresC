#include <stdio.h>

int main() {
    FILE *arquivo = fopen("dados.txt", "r");
    int numero;
    double pi;
    char texto[50];

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    fscanf(arquivo, "%d", &numero);
    fscanf(arquivo, "%lf", &pi);
    fscanf(arquivo, "%s", texto);

    if (fclose(arquivo) == 0) {
        printf("Dados lidos do arquivo:\n");
        printf("Número: %d\n", numero);
        printf("Valor de PI: %lf\n", pi);
        printf("Texto: %s\n", texto);
    } else {
        printf("Erro ao fechar o arquivo");
    }

    return 0;
}
