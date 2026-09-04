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

6-Declarar um ponteiro para float e alterar seu valor.
#include <stdio.h>

int main(){
    float numero = 3.14;
    float *ponteiro = &numero;
    
    *ponteiro = 6.28;
    
    printf("O valor e: %.2f", *ponteiro);
    
return 0;
}

7-Criar um ponteiro nulo e verificar se é NULL.
#include <stdio.h>

int main(){
    int *ponteiro = NULL;
    
    if(ponteiro == NULL){
        printf("E nulo!");
    }
    
return 0;
}

8-Passar um array para uma função usando ponteiro.
#include <stdio.h>

void imprimir(int *array){
    int i;
    
    for(i=0; i<5; i++){
        printf("%d\n", *(array + i));
    }
    
}

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    
    imprimir(array);


    return 0;
}

9-Incrementar valores de um array usando ponteiro.
#include <stdio.h>

int main()
{
    int array[5] = {1, 2, 3, 4, 5}, i;
    
    for(i=0; i<5; i++){
        *(array + i) = *(array + i) + 1;
        printf("O valor e: %d\n", *(array + i));
    }


    return 0;
}

10-Imprimir os endereços de elementos de um array usando ponteiro.
#include <stdio.h>

int main()
{
    int array[5] = {1, 2, 3, 4, 5}, i;
    
    for(i=0; i<5; i++){
        printf("O valor endereco de %d e: %d\n", *(array + i), (array + i));
    }


return 0;
}
*/