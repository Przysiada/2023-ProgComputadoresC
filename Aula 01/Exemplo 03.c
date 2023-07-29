#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[50];
    float n1, n2;
} tipo_aluno;

void main()
{
    tipo_aluno a;
    float media;

    printf("Informe o nome do aluno: ");
    fflush(stdin);
    gets(a.nome);
    printf("Informe a primeira nota: ");
    scanf("%f", &a.n1);
    printf("Informe a segunda nota: ");
    scanf("%f", &a.n2);

    media = (a.n1 + a.n2) / 2;
    printf("Media do aluno %s: %.2f", a.nome, media);
}
