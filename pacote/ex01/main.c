#include <stdio.h>
#include <stdlib.h>

int main()
{

   int A[6] = {1, 0, 5, -2, -5, 7};
   int i;
   //printf("%d", A[3]);
   int soma = A[0] + A[1] + A[5];
   printf("O resultado da soma dos vetores [0], [1] e [5] e: %d \n", soma);

   A[4] = 100;
   printf("alterando o valor do indice 4 temos: %d \n", A[4]);

   printf("Os indices do vetor A sao: ");

   for (i=0; i<6; i++){
    printf("%d ", A[i]);
   }

printf("\n");


    return 0;
}
