#include <stdio.h>

int main() {
    FILE *arquivo = fopen("exemplo.txt", "w");
    int numero = 42;
    double pi = 3.141592;
    char texto[] = "Hello, World!";

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    fprintf(arquivo, "Número: %d\n", numero);
    fprintf(arquivo, "Valor de PI: %lf\n", pi);
    fprintf(arquivo, "Texto: %s\n", texto);

    if (fclose(arquivo) == 0) {
        printf("Dados escritos no arquivo com sucesso.\n");
    } else {
        printf("Erro ao fechar o arquivo");
    }
    return 0;
}
