#include <stdio.h>

void main() {
	FILE *arquivo = fopen("exemplo.txt", "r");
	char caracter;

  if (arquivo != NULL) {
		fseek(arquivo, 0, SEEK_SET);
		while ( (caracter = fgetc(arquivo) ) != EOF) {
			putchar(caracter);
		}
		fclose(arquivo);
	}
	else {
		printf("Erro ao abrir o arquivo");
	}
}
