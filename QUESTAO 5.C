#include<stdio.h>
#include<stdlib.h>
int main(){
    //MAIOR NÚMERO

    int a, b, maior;

    scanf("%d %d", &a, &b);//Pro scanf, espaço ou enter ("\n") é a mesma coisa

    if(a>b){
        maior = a;
        printf("%d eh maior que %d\n", a, b);
            if(maior%b==0){
                printf("%d eh multiplo de %d\n", a, b);
            }else{
                printf("%d nao eh multiplo de %d\n", a, b);
            }
    }else if(a<b){
        maior = b;
        printf("%d eh maior que %d\n", b, a);
            if(maior%a==0){
                printf("%d eh multiplo de %d\n", b, a);
            }else{
                printf("%d nao eh multiplo de %d\n", b, a);
            }
    }else if(a==b){
        printf("Os valores lidos sao iguais\n");
    }
    return 0;
}