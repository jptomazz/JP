#include<stdio.h> 

#include<stdlib.h> 

int main(){ 

    /*int  aInt; 

    double  ano, aDouble; 

    scanf("%lf",&ano); 

    aInt = (int)ano / 4; 

    aDouble = ano / 4; 

    printf("%.1lf\n", aDouble); 

    printf("%d\n", aInt); 

    printf("%lf\n", aDouble - aInt);*/ 

    int anoInt, anoResposta; 

    double ano, anoDouble, anoVerdade; 

    scanf("%lf",&ano); 

    anoResposta =  ano; 

    anoInt = (int)ano/4; 

    anoDouble = ano/4; 

    anoVerdade = anoDouble - anoInt; 

    if(ano>=1930 && anoVerdade==0.5){ 
            if(ano==1942 || ano==1946){ 
                printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.",anoResposta); 
            }else{ 
                printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n",anoResposta); 
            } 

    }else if(ano>=1896 && anoVerdade==0.0){ 
        if(ano==1916 || ano==1940 || ano==1944){ 
                printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.",anoResposta); 
        }else{ 
                printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n",anoResposta); 
            } 
    } else{ 
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.",anoResposta); 
    } 
    return 0; 