#include <stdio.h>

void Movimentotorre(int casaAtual, int casaTotal){             // Inicio do comando recursivo da Torre
    if (casaAtual > casaTotal)
    {
       return;
    }
    printf("Torre  movimentando para a direita %d\n", casaAtual);
    Movimentotorre(casaAtual + 1, casaTotal);
}             // Fim do comando recursivo da torre 

void MovimentoRainha(int casaAtua, int casaTotal){ // Inicio do camando recursivo da rainha
    if (casaAtua > casaTotal){
        return;
    }

    printf("Rainha movimentando para a esquerda %d\n", casaAtua);
    MovimentoRainha(casaAtua + 1, casaTotal);
}             // fim do comando recursivo da rainha

void Movimentobispo(int passos, int totalPassos){  // Inicio do camando recursivo do bispo
    if(passos > totalPassos){
        return;
    }

for(int i = 1; i <= 1; i++){
    for(int j = 1; j <= 1; j++){
        printf("Bispo movimentando para cima e para a direita %d\n", passos);
   
    }
}
  
    Movimentobispo(passos + 1, totalPassos);
  //Fim do camando recursivo do bispo
}

int main(){

int casasCima = 2;
int casasDireita = 1;

 int casasTorre = 5;
 printf("Movimento da torre no xadrez:\n");
 Movimentotorre(1, casasTorre);

int casaRainha = 8;
printf("\nMovimento da rainha no xadrez:\n");
MovimentoRainha(1, casaRainha);

int casaBispo = 5;

printf("\nMovimento do bispo no xadrez:\n");
Movimentobispo(1, casaBispo);

printf("\nMovimento do cavalo no xadrez\n");
for(int i = 1; i <= casasCima; i++){
        printf("Cavalo anda %d casas(s) pra cima\n", i);
   }
   
    for(int j = 1; j <= casasDireita; j++){
         printf("Cavalo anda %d casa(s) para direita\n",j);
        }
return 0;
    }
