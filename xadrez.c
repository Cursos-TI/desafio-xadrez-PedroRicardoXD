#include <stdio.h>

int main() {

    int i; 
    int casasTorre = 5;
    int casasBispo = 5; 
    int casasRainha = 8;
    

    printf("\nMovimento da torre do xadrez:\n");
    for (i=1; i <= casasTorre; i++)//Repete "i" enquanto "i" for menor ou igual a 5, e incrementa "i" a cada volta

    {
        printf("torre movimentando para a direita %d casa(s)\n", i); 
    }    

    printf("\nMovimento do bispo no xadrez:\n");//  Movimenta o bispo 5 casas cima direita fazendo assim a diagonal
    i = 1;
    while (i <= casasBispo){
        printf("Bispo movimentou na diagonal para cima e para a direita até avançar %dcasa(s)\n",i);
        i++; }
    
    printf("\nMovimento da rainha no xadrez:\n");
    i = 1;
    do{
        printf("Rainha movimentando para a esquerda %d casa(s)\n", i);
        i++;
    } while(i <= casasRainha);

    printf("\nMovimento do cavalo no xadrez:\n");

    int casaBaixo = 2; 
    int casaEsquerda = 1;
    int j; 

    for(int movimento = 1; movimento <= 1; movimento++)
    {
        
        for(i = 1; i<= casaBaixo; i++)
        {
            printf("Cavalo avança para a casa de baixo %d\n", i);
            
        }
        j =1;
    while(j <= casaEsquerda)
    {
        printf("Cavalo avança para a casa da esquerda %d\n", j);
        j++;
    }
    }

    return 0;
}