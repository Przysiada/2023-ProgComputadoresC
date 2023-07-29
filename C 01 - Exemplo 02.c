#include <stdio.h>

void main()
{
    float notas[2][3], soma, media;
    int i, j;

    for (i = 0; i < 2; i++)
    {
        printf("informe as 3 notas do aluno %d\n", i+1);
        soma = 0;
        for (j = 0; j < 3; j++)
        {
            printf("Informe a nota %d: ", j+1);
            scanf("%f", &notas[i][j]);
            soma += notas[i][j];
        }
        media = soma / 3;
        printf("Media do aluno %d: %.2f\n\n", i+1, media);
    }

    printf("\n\nNotas armazenadas: \n");
    for ( i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%.2f\n", notas[i][j]);
        }
        printf("\n\n\n");
    }
}
