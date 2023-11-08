#include <stdio.h>

void main() {
    const char *nomeArquivo = "exemplo.txt";

    if (remove(nomeArquivo) == 0) {
        printf("O arquivo '%s' foi excluído com sucesso.\n", nomeArquivo);
    } else {
        printf("Falha ao excluir o arquivo '%s'. Certifique-se de que o arquivo exista e tenha permissões adequadas.\n", nomeArquivo);
    }
}
