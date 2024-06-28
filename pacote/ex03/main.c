#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[8] = {0,0,0,0,0,0,0,0};
    int soma;

        printf("Digite o valor da posicao 4 : ");
        scanf("%d", &vetor[4]);
        printf("agora digite o valor da posicao 7 : ");
        scanf("%d", &vetor[7]);

    if (vetor[4] && vetor[7] != 0){
        soma = vetor[4] + vetor[7];
        printf("O resultado da soma destes valores e: %d", soma);
    } else {
        printf("A soma dos valores nao pode ser exibida");
    }



    //printf("Hello world!\n");
    return 0;
}
