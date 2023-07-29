#include <stdio.h>

void main()
{
    float notas[4], soma, media;
    int i;
    soma = 0;
    printf("Informe as 4 notas do aluno\n");
    for (i = 0; i < 4; i++)
    {
        printf("Informe a nota %d: ", i+1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    media = soma / 4;
    printf("\nNotas armazenadas\n");
    for (i = 0; i < 4; i++)
    {
        printf("\n%.2f", notas[i]);
    }
    printf("\n\nMedia: %.2f", media);    
}
