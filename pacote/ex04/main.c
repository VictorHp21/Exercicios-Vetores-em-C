#include <stdio.h>
#include <stdlib.h>

int main()
{
     int vetor[8] = {0,0,0,0,0,0,0,0};
    int soma;
    int valores, i;

        printf("Informe quantos valores serao lidos pelo vetor: ");
        scanf("%d", &valores);

                for(i=0; i< valores; i++){
                    printf("Digite o valor %d: ", i+1);
                    scanf("%d", &vetor[i]);
                };

                if (valores = 8 && (vetor[4] && vetor[7] != 0)){
                    soma = vetor[4] + vetor[7];
                    printf("O resultado da soma dos valores nas posicoes 4 e 7 do vetor e: %d", soma); }
             else{
                printf("A soma entre os valores da posicao 4 e 7 nao pode ser efetuada.");
            }




        //printf("A soma dos valores nao pode ser exibida");



    return 0;
}
