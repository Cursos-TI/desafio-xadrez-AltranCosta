#include <stdio.h>

// Implementando a Recursividade
void moverTorre(int casas){
  if (casas > 0){
    moverTorre(casas - 1);
    printf("Torre moveu %d casas a Direita\n", casas);
  }
}

void moverBispo(int casas){
  if (casas > 0){
    moverBispo(casas - 1);
    printf("O bispo moveu %d  casas para cima a Direita\n", casas);
  }
}

void moverRainha(int casas){
  if (casas > 0){
    moverRainha(casas - 1);
    printf("A rainha moveu %d Casas pra Esquerda\n", casas);
  }
}

int main(){
  int moveuTorre = 5;
  int moveuBispo = 5;
  int moveuRainha = 5;

  printf("\n--- Movimentos ---\n");

  printf("\nTorre:\n");
  moverTorre(moveuTorre);// movimentação da Torre

  printf("\n ==================================\n");

  printf("\n Bispo:\n");
  moverBispo(moveuBispo);// Movimentação do Bispo

    printf("\n ==================================\n");

  printf("\n Rainha:\n");
  moverRainha(moveuRainha);// Movimentação da Rainha

  printf("\n ==================================\n");


  for (int cavalo1 = 1; cavalo1 <= 1; cavalo1++){
        for (int cavalo = 1; cavalo <= 2; cavalo++)
        {
            printf("O Cavalo moveu %d Casas para Cima\n", cavalo);
        }
        printf("O Cavalo Moveu %d casas para Direita\n", cavalo1);
  }


  return 0;

}