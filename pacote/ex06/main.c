#include <stdio.h>
#include <stdlib.h>




int main()
{
    int vetor[10];
    int i;
    int p = 0;






        for(i=0; i<10; i++){
            printf("Digite o valor da posicao %d: ", i);
            scanf("%d", &vetor[i]);

                     if (vetor[i] % 2 == 0){
                    p++;
                    }
        }



         printf("O numero de valores pares digitados e: %d \n", p);


            printf("Nas posicoes: \n");

         for (i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            printf("%d ", i);

        }
         }


    return 0;
}
