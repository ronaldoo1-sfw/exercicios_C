/*Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma
variável auxiliar.*/

#include<stdio.h>

int main(){
    int a, b;

    printf("Digite um valor para A: \n");
    scanf("%d", &a);

    printf("Digite um valor para B: \n");
    scanf("%d", &b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("Depois da troca: \nA: %d\nB: %d\n", a, b);

    return 0;
}