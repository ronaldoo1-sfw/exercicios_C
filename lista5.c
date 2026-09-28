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

#include <stdio.h>

typedef struct{
char titulo[50];
char autor[50];
int paginas;
} Livro;

int main(){
    Livro l1;

    printf("Digite o titulo do livro: \n");
    scanf(" %[^\n]", l1.titulo);
    printf("Digite o autor do liro: \n");
    scanf(" %[^\n]", l1.autor);
    printf("Digite o numero de paginas: \n");
    scanf(" %d", &l1.paginas);
    printf("DADOS DO LIVRO\n");
    printf("Titulo do livro: %s \n", l1.titulo);
    printf("Autor do livro: %s \n", l1.autor);
    printf("Numero de paginas: %d \n", l1.paginas);
    
    return 0;
}

3.Crie um vetor de 3 structs do tipo Aluno contendo: nome e média. Leia os dados dos 3 alunos e exiba todos ao final.

#include <stdio.h>

typedef struct{
char nome[60];
float media;
} Aluno;

int main(){
    Aluno turma[3];
    int i;

    for(i=0; i<3; i++){
        printf("Digite o nome do aluno %d : \n", i + 1);
        scanf(" %[^\n]", turma[i].nome);
        printf("Digite a idade do aluno %d: \n", i + 1);
        scanf(" %f", &turma[i].media);
    }

    for(i=0; i<3; i++){
        printf("DADOS DO ALUNO\n");
        printf("Nome do aluno %d: %s \n", i + 1, turma[i].nome);
        printf("Nota do aluno %d: %.2f \n", i + 1, turma[i].media);
    }

    return 0;
}
 
4.Crie uma struct Funcionario com: nome e salário. Leia os dados de 2 funcionários e mostre qual deles tem o maior salário.

#include <stdio.h>

typedef struct{
char nome[60];
float salario;
} Funcionario;

int main(){
    Funcionario f[2];
    int i;

    for(i=0; i<2; i++){
        printf("Digite o nome do funcionario %d : \n", i + 1);
        scanf(" %[^\n]", f[i].nome);
        printf("Digite o salario do funcionario %d: \n", i + 1);
        scanf(" %f", &f[i].salario);
    }

    if(f[0].salario > f[1].salario){
        printf("O maior salario é do funcionario: %s", f[0].nome);
    }else{
        printf("O maior salario é do funcionario: %s", f[1].nome);
    }

    return 0;
}

5.Crie uma struct Endereco com:rua e número. Depois crie uma struct Pessoa com:nome, idade e endereço. Leia os dados e exiba tudo.

#include <stdio.h>

typedef struct{
char rua[60];
int numero;
} Endereco;

typedef struct{
char nome[60];
int idade;
Endereco end;
} Pessoa;

int main(){
    Pessoa p;

    printf("Digite o nome: \n");
    scanf(" %[^\n]", p.nome);
    printf("Digite a idade: \n");
    scanf("%d", &p.idade);
    printf("Digite a rua: \n");
    scanf(" %[^\n]", p.end.rua);
    printf("Digite o numero: \n");
    scanf(" %d", &p.end.numero);
    
    printf("O nome eh: %s \n", p.nome);
    printf("A idade eh: %d \n", p.idade);
    printf("A rua eh %s \n", p.end.rua);
    printf("O numero eh: %d \n", p.end.numero);

    return 0;
}
 
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