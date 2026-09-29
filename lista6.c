//Crie um vetor de 10 números e mostre apenas os pares
#include<stdio.h>

int main(){

int vetor[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int i;

for(i=0; i<10; i++){
    if(vetor[i] % 2 == 0){
        printf("%d\n", vetor[i]);
    }
}

return 0;
}

//Leia uma matriz 3x3 e mostre a diagonal principal
#include<stdio.h>
int main(){
int vetor[3][3];
int i, j;
for(i=0; i<3; i++){
for(j=0; j<3; j++){
printf("Digite um numero para a posicao %d %d da matirz:\n", i, j);
scanf("%d", &vetor[i][j]);
}
}
printf("Diagonal principal:\n %d \n %d \n %d", vetor[0][0], vetor[1][1], vetor[2][2]);
return 0;
}

//Some todos os valores de uma matriz 4x4
#include<stdio.h>
int main(){
int mat[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {1, 2, 3, 4}, {5, 6, 7, 8}};
int i, j;
int soma = 0;
for(i=0; i<4; i++){
for(j=0; j<4; j++){
soma += mat[i][j];
}
}
printf("A soma dos elementos: %d", soma);
return 0;
}

//Encontre o maior valor de um vetor
#include<stdio.h>
int main(){
int vet[5] = {1, 2, 3, 4, 5};
int maior = 0;
int i;
for(i=0; i<5; i++){
if(vet[i]>maior){
maior = vet[i];
}
}
printf("O maior elemento foi: %d", maior);
return 0;
}

//Contar quantos números pares existem no vetor
#include<stdio.h>
int main(){
int vet[5] = {1, 2, 3, 4, 5};
int pares = 0;
int i;
for(i=0; i<5; i++){
if(vet[i] % 2 == 0){
pares++;
}
}
printf("O numero de elementos pares foi: %d", pares);
return 0;
}

//Mostrar os elementos de um vetor em ordem inversa
#include<stdio.h>
int main(){
int vet[5] = {1, 2, 3, 4, 5};
int i;
for(i=4; i>=0; i--){
printf("%d ", vet[i]);
}
return 0;
}

//Calcular a média dos valores de um vetor
#include<stdio.h>
int main(){
int vet[5] = {1, 2, 3, 4, 5};
float soma = 0;
int i;
for(i=0; i<5; i++){
soma += vet[i];
}
printf("A media e: %.2f", (soma / 5));
return 0;
}

//Somar apenas os elementos da diagonal secundária de uma matriz 3x3
#include<stdio.h>
int main(){
int mat[3][3] = {{1, 2, 3}, {5, 6, 7}, {1, 2, 3}};
int i, j;
int soma = 0;
soma = mat[0][2] + mat[1][1] + mat[2][0];
printf("A soma dos elementos: %d", soma);
return 0;
}

//Encontrar o menor valor de uma matriz 3x3
#include<stdio.h>
int main(){
int mat[3][3] = {{4, 2, 3}, {5, 6, 7}, {1, 2, 3}};
int i, j;
int menor = mat[0][0];
for(i=0; i<3; i++){
for(j=0; j<3; j++){
if(mat[i][j] < menor){
menor = mat[i][j];
}
}
}
printf("O menor elemento eh: %d", menor);
return 0;
}
//Multiplicar todos os elementos de uma matriz 2x2 por um número
#include<stdio.h>
int main(){
int mat[2][2] = {{4, 2}, {5, 6}};
int i, j;
for(i=0; i<2; i++){
printf("\n");
for(j=0; j<2; j++){
mat[i][j] *= 2;
printf("%d ", mat[i][j]);
}
}
return 0;
}