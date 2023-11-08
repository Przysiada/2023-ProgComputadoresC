#include <stdio.h>
#include <stdlib.h>

void mergeSort(int *vetor, int posicaoInicio, int posicaoFim) 
{    
	int i, j, k, metadeTamanho, *vetorTemp;    
	if(posicaoInicio == posicaoFim) return;    
	metadeTamanho = (posicaoInicio + posicaoFim ) / 2;
	
	mergeSort(vetor, posicaoInicio, metadeTamanho);    
	mergeSort(vetor, metadeTamanho + 1, posicaoFim);
  i = posicaoInicio;    
	j = metadeTamanho + 1;    
	k = 0;    
	vetorTemp = (int *) malloc(sizeof(int) * (posicaoFim - posicaoInicio + 1));

    while(i < metadeTamanho + 1 || j  < posicaoFim + 1) {        
			if (i == metadeTamanho + 1 ) {             
				vetorTemp[k] = vetor[j];            
				j++;            
				k++;        
			}        
			else {            
				if (j == posicaoFim + 1) {                
					vetorTemp[k] = vetor[i];                
					i++;                
					k++;            
				}            
				else {                
					if (vetor[i] < vetor[j]) {                    
						vetorTemp[k] = vetor[i];                    
						i++;                    
						k++;                
					}                
					else {                    
						vetorTemp[k] = vetor[j];                    
						j++;                    
						k++;                
					}            
				}        
			}
    }    
		for(i = posicaoInicio; i <= posicaoFim; i++) {        
			vetor[i] = vetorTemp[i - posicaoInicio];    
		}    
		free(vetorTemp);
}

void main(){    
	int vet[] = {9,8,7,6,5,4,3,2,1,0}, i;
    mergeSort(vet,0,9);
    for (i = 0; i < 10; i++)    {
        printf("Posicao %d = %d\n", i, vet[i]);    
	}
}
