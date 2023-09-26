#include <stdio.h>

int main() {
    int numero, digito, soma = 0;

    printf("Digite um numero (0 <= N <= 1000000000): ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O numero e par.\n");
    } else {
        printf("O numero e impar.\n");
    }

    while (numero > 0) {
        digito = numero % 10;
        soma += digito;
        numero /= 10;
    }
    
    printf("A soma dos seus digitos e: %d\n", soma);

    return 0;
}


