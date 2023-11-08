#include <stdio.h>

void main() {
    const char *nomeAntigo = "arquivo_antigo.txt";
    const char *nomeNovo = "arquivo_novo.txt";

    if (rename(nomeAntigo, nomeNovo) == 0) {
        printf("O arquivo foi renomeado com sucesso para '%s'.\n", nomeNovo);
    } else {
        printf("Falha ao renomear o arquivo. Certifique-se de que o arquivo exista e tenha permissões adequadas.\n");
    }
}
