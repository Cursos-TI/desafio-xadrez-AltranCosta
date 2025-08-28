#include <stdio.h>

int main(){
   
    int bispo = 1; 
    int rainha = 1;
    printf("\n **** Bem Vindo ao jogo de Xadrez **** \n");

    // movimentação da Torre com For
    for (int torre = 1; torre <= 5; torre++)
    {
        printf("A Torre moveu  %d casas para Direita\n", torre);
    }
    
    printf("\n =================================\n");

   // movimentação do Bispo com while
    while (bispo <= 5)
    {
       printf("O Bispo moveu %d casas para cima e Direta\n", bispo);
       bispo++;
    }
    
    printf("\n =================================\n");
    
    // movimentação d a Rainha com Do While
    do
    {
        printf("A Rainha moveu %d casas a Esqueda\n", rainha);
        rainha++;
    } while (rainha <= 8);

    printf("\n =================================\n");

    // movimento do cavalo em L 
    for (int cavalo1 = 1; cavalo1 <= 1; cavalo1++){
        for (int cavalo = 1; cavalo <= 2; cavalo++)
        {
            printf("O Cavalo moveu %d Casas para Baixo\n", cavalo);
        }
        printf("O Cavalo Moveu %d casas para Esqueda\n", cavalo1);
    }
    
    
    
    return 0;
}
