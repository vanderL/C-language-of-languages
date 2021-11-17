#include <stdio.h>

int main() {

    //imprime o cabeçalho
    printf("******************************\n");
    printf("* Ola mundo * \n");
    printf("******************************\n");

    int secretNumber = 40;
    int kick;

    printf("Qual o seu chute? ");
    scanf("%d", &kick);
    printf("Seu chute foi %d \n", kick);
    
    int win = (kick == secretNumber);
    
    if(win) {
        printf("Parabens! voce acertou! \n");
        pritf("Jogue novamente!");
    } else {
        int up = kick > secretNumber;
        if(up) {
            printf("Chute foi maior\n");
        } else {
            printf("Chute foi menor\n");
        }
    }

}