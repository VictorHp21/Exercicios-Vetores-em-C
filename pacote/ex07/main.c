#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10];
    int i;
    int maior, menor;


     for (i=0; i<10; i++){
        printf("digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);

     }

     maior = vetor[0];
     menor = vetor[0];


      for (i=0; i<10; i++){


   if (vetor[i]> maior){
                maior = vetor[i];
            }
            if (vetor[i]< menor){
                menor = vetor[i];
            }

      }


        printf("O maior elemento do vetor e: %d \n", maior);
         printf("O menor elemento do vetor e: %d", menor);

    return 0;
}
