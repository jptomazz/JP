#include <stdio.h>

int main(){
    int valor1;
    int valor2;
    int resultado;
    char operacao;

    printf("Qual a operacao?\n");
    scanf("%c", &operacao);
    printf("Qual o primeiro valor?\n");
    scanf("%d", &valor1);
    printf("Qual o segundo numero?\n");
    scanf("%d", &valor2);
    
    if(operacao == '+'){
        printf("Operacao de soma e o resultado e: %d\n", valor1 + valor2);
    }else if(operacao == '-') {
        printf("Operacao de subtracao e o resultado e: %d\n", valor1 - valor2);
    }else if (operacao == '*'){
        printf("Operacao de multiplicacao e o resultado e: %d\n", valor1 * valor2);
    }else if (operacao == '/'){
        printf("Operacao de divisao e o resultado e: %d\n", valor1 / valor2);
    }else if(operacao == '%') {
        printf("Operacao de divisao e o resultado e: %d\n", valor1 % valor2);
    } else if(operacao == 'c' && valor1 > valor2){
            printf("%d e maior que %d\n", valor1, valor2);
    } else if(operacao == 'c' && valor1 < valor2){
        printf("%d e menor que %d\n", valor1, valor2);
    } else if(operacao == 'c' && valor1 == valor2){
        printf("%d e igual a %d\n", valor1, valor2);
    } else {
        printf("OPERACAO INVALIDA!!!\n");
    
    }


    // SOMA resultado = valor1 + valor2;
    // SUBTRACAO resultado = valor1 - valor2;
    // MULTIPLICACAO resultado = valor1 * valor2;
    // DIVISAO resultado = valor1 / valor2;
    // OP DE RESTO resultado = valor1 % valor2;
    // INCREMENTO valor1++;
    // DECREMENTO valor1--;

    return 0;
}