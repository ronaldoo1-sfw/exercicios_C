#include<stdio.h>
#include<stdlib.h>

int main(){
    int tamanho, *vetor, i;

    printf("Digite a quantidade de numeros que deseja digitar:\n");
    scanf("%d", &tamanho);

    vetor = (int *) malloc(tamanho * sizeof(int));

    for(i=0; i<tamanho; i++){
        printf("Digite o numero %d:\n", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Os numeros na ordem inversa sao:\n");
    for(i=tamanho - 1; i>= 0; i--){
         printf("Na posicao %d: %d\n", i + 1, vetor[i]);
    }

    free(vetor);

    return 0;
}