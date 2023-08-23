#include <stdio.h>

int main(void)
{
    int *pointer;
    int x = 500;
    int y;
    
    pointer = &x;
    y = *pointer;

    printf( "Valor : %i", y );
}
