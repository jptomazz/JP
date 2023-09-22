#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    int soma=0;

    scanf("%d", &numero);

    switch(numero%2){
        case 0
            printf("o numero par!\n");
            break;
        default:
            printf("o numero impar!\n");
    } while (numero !=0){

        soma+= numero%10;
        numero /=10;
    } printf("A soma dos algarismos %d\n" ,soma);


    return 0;  
}
s

