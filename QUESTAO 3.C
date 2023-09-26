#include <stdio.h>

int main() {
    int senha_cadastrada, senha_inserida, tentativas;
    
    // Lê a senha cadastrada inicialmente
    scanf("%d", &senha_cadastrada);
    
    // Inicializa o número de tentativas
    tentativas = 0;
    
    // Entra em um loop para receber as tentativas do usuário
    while (1) {
        scanf("%d", &senha_inserida);
        tentativas++;
        
        if (senha_inserida == senha_cadastrada) {
            // Senha correta, exibe mensagem e encerra o programa
            printf("senha cadastrada: %d\nsenha valida!\n", senha_cadastrada);
            break;
        } else {
            // Senha incorreta, exibe mensagem de senha inválida
            printf("senha invalida!\n");
            
            // Se o número de tentativas exceder 3, encerra o programa
            if (tentativas >= 3) {
                printf("Numero de tentativas excedido. Tente novamente mais tarde.\n");
                break;
            }
        }
    }
    
    return 0;
}





