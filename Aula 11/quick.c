#include <stdio.h>

void quick(int vet[], int inicio, int fim)
{
    int pivo = inicio, ch, i, j;

    for(i = inicio+1; i <= fim ;i++){
        j = i;
        if(vet[j] < vet[pivo]){
            ch = vet[j];
            while(j > pivo){
                vet[j] = vet[j-1];
                j--;
            }
            vet[j] = ch;
            pivo++;
        }
    }

    if(pivo-1 >= inicio)
        quick(vet,inicio,pivo-1);
    if(pivo+1 <= fim)
        quick(vet,pivo+1,fim);

}

void main()
{
    int vet[] = {9,8,7,6,5,4,3,2,1,0}, i;

    quick(vet,0,9);

    for (i = 0; i < 10; i++)
    {
        printf("Posicao %d = %d\n", i, vet[i]);
    }
}
