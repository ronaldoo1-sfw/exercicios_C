/*Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um
para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final, a variável
“a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente
estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores na tela.
*/

#include<stdio.h>

int main(){
    int a, b, c;

    printf("Digite um valor para a variavel a: \n");
    scanf("%d", &a);

    printf("Digite um valor para a variavel b: \n");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("O valor final da variavel a: %d\n", a);
    printf("O valor final da variave b: %d\n", b);

    return 0;
}