#include<stdio.h>
#include<stdlib.h>
int main(){
    float salario, novoSalario;
    char nivelExperiencia;

    scanf("%c",&nivelExperiencia);
    scanf("%f",&salario);

    if(nivelExperiencia == 'a'){
        novoSalario = salario + (salario*0.05);
        printf("R$ %.2f\n", novoSalario);
    } else if(nivelExperiencia == 'b'){
        novoSalario = salario + (salario*0.07);
        printf("R$ %.2f\n", novoSalario);
    } else if(nivelExperiencia == 'c'){
        novoSalario = salario + (salario*0.08);
        printf("R$ %.2f\n", novoSalario);
    }
    return 0;
}