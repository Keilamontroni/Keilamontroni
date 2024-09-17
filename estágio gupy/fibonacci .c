#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPerfectSquare(int x) {
    int s = (int)sqrt(x);
    return (s * s == x);
}

bool isFibonacci(int n) {
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

int main() {
    int numero;
    printf("Informe um numero: ");
    scanf("%d", &numero);

    if (isFibonacci(numero)) {
        printf("O numero %d pertence a sequencia de Fibonacci.\n", numero);
    } else {
        printf("O numero %d nao pertence a sequencia de Fibonacci.\n", numero);
    }
  return 0;
}