/*1-Declare um ponteiro para int e faça ele apontar para uma variável num.

#include <stdio.h>

int main(){
    int numero = 1;
    int *ponteiro = &numero;
    
    printf("%d", *ponteiro);
    
return 0;
}


2-Alterar o valor de uma variável usando ponteiro.

#include <stdio.h>

int main(){
    int numero = 1;
    int *ponteiro = &numero;
    
    printf("%d\n", *ponteiro);
    
    *ponteiro = 40;
    
    printf("Agora vale: %d", *ponteiro);
    
return 0;
}


3-Imprimir endereços de variáveis.

#include <stdio.h>

int main(){
    int numero = 1;
    int *ponteiro = &numero;
    
    printf("%d\n", &ponteiro);
    
return 0;
}

4-Acessar elementos de um array usando ponteiro.

#include <stdio.h>

int main(){
    int array[3] = {6, 7, 8}, i;
    
    for(i=0; i<3; i++){
        printf("Elemento %d: %d\n", i + 1, *(array + i));
    }
    
    
return 0;
}

5-Criar uma função que troca valores de duas variáveis usando ponteiro.

#include <stdio.h>

void troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}


int main(){
    int a = 8, b = 6;
    
    troca(&a, &b);
    
    printf("O valor de a: %d, e b: %d\n", a, b);
    
return 0;
}
*/