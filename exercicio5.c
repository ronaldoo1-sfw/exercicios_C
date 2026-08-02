/*1.Crie um programa que leia N numeros inteiros digitados pelo usuário, aloque dinamicamente um vetor
desse tamanho e depois imprima os números em ordem inversa. Não se esqueça de liberar a memória com free().*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int n, *vetor, i;

    printf("Quantos numeros deseja inserir?\n");
    scanf("%d", &n);

    if(n<=0){
        printf("Opcao inválida!");
        return 1;
    }

    vetor = (int *) malloc(n * sizeof(int));
    
    if(vetor == NULL){
        printf("Memoria insuficiente!");
        return 1;
    }


    printf("Digite os numeros %d escolhidos: \n", n);
    for(i=0; i<n; i++){
        printf("Numero %d: \n", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Na ordem inversa: \n");
    for(i= n-1; i>=0; i--){
        printf("%d \n", vetor[i]);
    }
    printf("\n");

    free(vetor);
    vetor = NULL;

    return 0;
}