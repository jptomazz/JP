#include <stdio.h>

int main() {
    char nivel;
    double salario, aumento, salario_atualizado;

    printf("Digite o nivel de experiencia (a, b ou c): ");
    scanf(" %c", &nivel); 
    printf("Digite o salario atual: ");
    scanf("%lf", &salario);

    switch (nivel) {
        case 'a':
            aumento = 0.05;
            break;
        case 'b':
            aumento = 0.07;
            break;
        case 'c':
            aumento = 0.08;
            break;
        default:
            printf("nivel de experiencia invalido.\n");
            return 1;
    }

    salario_atualizado = salario + (salario * aumento);

    printf("O novo salario e: %.2lf\n", salario_atualizado);

    return 0;
}