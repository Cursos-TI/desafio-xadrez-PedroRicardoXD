#include <stdio.h>

int main() {

    int i; 
    int casasTorre = 5;
    int casasBispo = 5; 
    int casasRainha = 8;

    printf("Movimento da torre do xadrez:\n");
    for (i=1; i <= casasTorre; i++)//Repete "i" enquanto "i" for menor ou igual a 5, e incrementa "i" a cada volta

    {
        printf("torre movimentando para a direita %d\n", i); 
    }    

    printf("Movimento do bispo no xadrez:\n");//  Movimenta o bispo 5 casas cima direita fazendo assim a diagonal
    i = 1;
    while (i <= casasBispo){ // só entra se for verdadeira a condição
        printf("Bispo movimentou na diagonal para cima e para a direita até avançar %d\n",i);
        i++; }
    
    printf("Movimento da rainha no xadrez:\n");
    i = 1;
    do{ // entra uma vez de qualquer jeito, depois pergunta se vai de novo 
        printf("Rainha movimentando para a esquerda %d\n", i);
        i++;
    } while(i <= casasRainha);

    return 0;
}