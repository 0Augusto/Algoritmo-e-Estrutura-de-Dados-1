#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0; // O primeiro número da sequência é 0
    } else if (n == 1) {
        return 1; // O segundo número da sequência é 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Chamada recursiva para os números anteriores
    }
}

int main() {
    int n;
    printf("Digite o valor de N para calcular o N-ésimo número da sequência de Fibonacci: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("N deve ser um número inteiro positivo.\n");
    } else {
        printf("O %d-ésimo número da sequência de Fibonacci é: %d\n", n, fibonacci(n - 1));
    }

    return 0;
}

