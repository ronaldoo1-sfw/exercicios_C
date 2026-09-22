/*
1. Crie uma struct chamada dev com: Nome, stack, idade, email.Leia os dados do usuário e exiba ao final.

#include<stdio.h>

typedef struct{
char nome[50];
char stack[50];
int idade;
char email[60];
} Dev;

int main(){
    Dev user;

    printf("Digite seu nome:\n");
    scanf(" %[^\n]", user.nome);
    printf("Digite sua stack:\n");
    scanf(" %[^\n]", user.stack);
    printf("Digite sua idade:\n");
    scanf(" %d", &user.idade);
    printf("Digite email:\n");
    scanf(" %[^\n]", user.email);

    printf("O nome eh: %s \n", user.nome);
    printf("Sua stack eh: %s \n", user.stack);
    printf("A idade eh: %d \n", user.idade);
    printf("O email eh: %s \n", user.email);

return 0;
}

2.Crie uma struct chamada Produto com: nome, preço, quantidade.Leia os dados do usuário e exiba ao final.

#include<stdio.h>

typedef struct{
char nome[50];
float preco;
int quantidade;
} Produto;

int main(){
    Produto p1;

    printf("Digite o produto:\n");
    scanf(" %[^\n]", p1.nome);
    printf("Digite seu preco:\n");
    scanf(" %f", &p1.preco);
    printf("Digite a quantidade:\n");
    scanf(" %d", &p1.quantidade);
    printf("O nome eh: %s \n", p1.nome);
    printf("Seu preco eh: %.2f \n", p1.preco);
    printf("A quantidade eh: %d \n", p1.quantidade);
    
return 0;
}

3.Crie uma struct chamada Carro com:marca modelo, ano. Cadastre um carro e mostre os dados..

#include<stdio.h>
typedef struct{
char marca[50];
char modelo[30];
int ano;
} Carro;

int main(){
    Carro c1;

    printf("Digite a marca do carro:\n");
    scanf(" %[^\n]", c1.marca);
    printf("Digite o modelo:\n");
    scanf(" %[^\n]", c1.modelo);
    printf("Digite o ano:\n");
    scanf(" %d", &c1.ano);
    printf("A marca eh: %s \n", c1.marca);
    printf("O modelo eh: %s \n", c1.modelo);
    printf("O ano eh: %d \n", c1.ano);

    return 0;
}


4. Crie uma struct chamada pokemon com: nome, características e numero da sorte. Leia os dados do usuário e exiba ao final.

#include<stdio.h>

typedef struct{
char nome[50];
char carac[120];
int num_sorte;
} Pokemon;

int main(){

    Pokemon p1;
    printf("Digite o nome do Pokemon:\n");
    scanf(" %[^\n]", p1.nome);
    printf("Digite as caracteristicas do Pokemon:\n");
    scanf(" %[^\n]", p1.carac);
    printf("Digite o numero da sorte do Pokemon:\n");
    scanf(" %d", &p1.num_sorte);
    
    printf("----------POKEDEX----------\n");
    printf("O Pokemon eh: %s \n", p1.nome);
    printf("Suas caracteristicas sao: %s \n", p1.carac);
    printf("O numero da sorte dele eh: %d \n", p1.num_sorte);

return 0;
}
*/