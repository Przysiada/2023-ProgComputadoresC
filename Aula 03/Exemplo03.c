#include <stdio.h>

void trocar( int *a , int *b ) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 5, num2 = 10;

    printf( "Antes da troca: num1 = %d, num2 = %d\n" , num1, num2 );
    trocar( &num1 , &num2 );
    printf( "Depois da troca: num1 = %d, num2 = %d\n" , num1 , num2 );

    return 0;
}
