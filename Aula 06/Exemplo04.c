#include <stdio.h>

long long fibonacci( int n, long long a, long long b ) {
    if ( n == 0 ) {
        return a;
    } else {
        return fibonacci( n - 1 , b , a + b );
    }
}

void main() {
    int n = 10;
    long long resultado = fibonacci(n, 0, 1);
    printf("O termo de Fibonacci de posição %d é %lld\n", n, resultado);
}
