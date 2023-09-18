#include <stdio.h>

int main(void)
{
  int x, *ptrx, **pptrx;
  
  x = 0;
  printf("valor de x = %d\n", x);
  printf("Endereco de x: %x\n\n",&x);
  
  ptrx = &x; 
  pptrx = &ptrx; 
    
  *ptrx = *ptrx + 10;
  printf("valor de x = %d\n", x);
  printf("Endereco apontado por ptrx: %x\n", ptrx);
  printf("Valor da variavel X que esta sendo apontada por ptrx: %d\n", *ptrx);
  printf("Endereco de memoria da variavel ptrx %x\n\n", &ptrx); 
 
  **pptrx = **pptrx + 10;
  printf("valor de x = %d\n", x);
  printf("Endereco apontado por **pptrx: %x\n", pptrx);
  printf("Valor da variavel para a qual pptrx faz referencia: %d\n", **pptrx);
  printf("Endereco de memoria da variavel **pptrx %x\n", &pptrx);
  
  return 0;
}
