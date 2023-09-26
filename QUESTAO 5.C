#include <stdio.h>

int main() {
    int A, B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    if (A == B) {
        printf("Os valores lidos sao iguais\n");
    } else {
        int maior, menor;
        if (A > B) {
            maior = A;
            menor = B;
        } else {
            maior = B;
            menor = A;
        }

        if (maior % menor == 0) {
            printf("%d eh maior que %d\n", maior, menor);
            printf("%d eh multiplo de %d\n", maior, menor);
        } else {
            printf("%d eh maior que %d\n", maior, menor);
            printf("%d nao eh multiplo de %d\n", maior, menor);
        }
    }

    return 0;
}