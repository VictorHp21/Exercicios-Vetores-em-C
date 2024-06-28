#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[6];
    int i;

        for (i=0; i<6; i++){
            printf("Digite o valor da posicao %d : ", i);
            scanf("%d", &vetor[i]);

        };

            for (i=0; i<6; i++){
                printf("valor inicialmente digitado: %d  \n", vetor[i]);
                printf("valor multiplicado pela posicao %d: %d \n \n", i,  vetor[i] * i);
            }



    return 0;
}
