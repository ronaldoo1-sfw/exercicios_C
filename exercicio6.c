/*2.Implemente uma função que receba um ponteiro para um vetor dinâmico e use realloc() para dobrar a capacidade do vetor
toda vez que ele estiver cheio.*/

#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int *dados;
    int quantidade;
    int capacidade;
} vetorDinamico;

void inserir(vetorDinamico *v, int elemento){
    if(v->quantidade == v->capacidade){
        int nova_capacidade = 2 * v->capacidade;

        printf("Vetor cheio! (%d/%d) Expandindo para %d\n", v->quantidade, v->capacidade, nova_capacidade);
    }
}