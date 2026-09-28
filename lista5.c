/*
1.Crie uma struct chamada Aluno com: nome, idade e nota. Declare uma variável, atribua valores e exiba na tela.

#include <stdio.h>

typedef struct{
int idade;
char nome[60];
int nota;
} Aluno;

int main(){
    Aluno a1;

    printf("Digite a idade do aluno: \n");
    scanf(" %d", &a1.idade);
    printf("Digite o nome do aluno: \n");
    scanf(" %[^\n]", a1.nome);
    printf("Digite a nota do aluno: \n");
    scanf(" %d", &a1.nota);

    printf("DADOS DO ALUNO\n");
    printf("Idade do aluno: %d \n", a1.idade);
    printf("Nome do aluno: %s \n", a1.nome);
    printf("Nota do aluno: %d \n", a1.nota);

    return 0;
}

2.Usando typedef, crie uma struct chamada Livro com: título, autor e número de páginas. Leia os dados e exiba.

3.
Crie um vetor de 3 structs do tipo Aluno contendo:

nome

média

Leia os dados dos 3 alunos e exiba todos ao final.

 

4.
Crie uma struct Funcionario com:

nome

salário

Leia os dados de 2 funcionários e mostre qual deles tem o maior salário.

 

5.
Crie uma struct Endereco com:

rua

número

Depois crie uma struct Pessoa com:

nome

idade

endereço

Leia os dados e exiba tudo.

 

6.
Crie uma função que receba uma struct Produto e exiba seus dados.





7.
Crie uma função que receba uma struct Aluno por ponteiro e aumente a nota dele em 1 ponto.

 

8.
Crie uma struct ContaBancaria com:

titular

número da conta

saldo

Leia os dados e exiba.

 

9.
Crie um vetor com 5 structs Produto e calcule:

o valor total em estoque
(preço * quantidade de cada produto)

 

10.
Crie uma struct Data com:

dia

mês

ano

Leia uma data e exiba no formato:
dd/mm/aaaa








11.
Crie uma struct Paciente com:

nome

idade

peso

altura

Exiba todos os dados cadastrados.

 

12.
Crie uma struct Retangulo com:

base

altura

Faça uma função que receba essa struct e calcule a área.

 

13.
Crie uma struct Time com:

nome do time

número de vitórias

número de derrotas

Leia os dados e exiba.
*/