char **split(char frase[], char separador)
{
    int i, j, k, contsep = 0;

     for(i=0,contsep=0;i<strlen(frase);i++)
       if(frase[i] == separador)
          contsep++;

    char  aux[contsep][20];
    char **result = (char**)malloc(contsep*sizeof(char));
    
    if(contsep)
    {
        for(i=0; i<=contsep; i++ )
          *(result + i) = (char*)malloc(40*sizeof(char));
        
        for(i=0,k=0,j=0; i < strlen(frase); i++)
           if(frase[i] != separador)
           {
              aux[k][j] = frase[i];
              j++;
           }
           else
           {
              aux[k][j] = 0;
              k++;
              j=0;
           }
        aux[k][j] = 0;
        
        for(i=0;i<=contsep;i++)
          *(result+i) = strcpy(*(result+i), aux[i]);
        
        return result;
    }
    else
        mensagem("Nenhum Separador Encontrado");
}
