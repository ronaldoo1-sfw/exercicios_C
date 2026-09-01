/*1 - Declare uma variável int chamada idade e imprima seu valor.

#include <stdio.h>
    int main()
{
    int idade = 10;
    printf("Idade: %d\n", idade);
    return 0;
}

2. Declare uma variável float chamada peso e imprima com 1 casa decimal.

#include <stdio.h>
    int main()
{
    float peso = 20.5;
    printf("Peso: %.1f\n", peso);
    return 0;
}

2. Declare uma variável char chamada letra e imprima.

#include <stdio.h>
    int main()
{
    char letra = 'c';
    printf("Caractere: %c\n", letra);
    return 0;
}

3. Leia um número inteiro e mostre o valor digitado.

#include <stdio.h>
    int main()
{
    int inteiro;
    printf("Digite um numero inteiro: ");
    scanf("%d", &inteiro);
    printf("Inteiro: %d\n", inteiro);
    return 0;
}

4. Leia dois inteiros e mostre a soma.

#include <stdio.h>
    int main()
{
    int n1, n2, soma;
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &n2);
    soma = n1 + n2;
    printf("A soma e: %d", soma);
    return 0;
}

5. Leia dois inteiros e mostre a subtração.

#include <stdio.h>
    int main()
{
    int n1, n2, subtracao;
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &n2);
    subtracao = n1 - n2;
    printf("A subtracao e: %d", subtracao);
    return 0;
}

6. Leia dois inteiros e mostre a multiplicação.

#include <stdio.h>
    int main()
{
    int n1, n2, multiplicacao;
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &n2);
    multiplicacao = n1 * n2;
    printf("A multiplicacao e: %d", multiplicacao);
    return 0;
}

7. Leia dois inteiros e mostre a divisão inteira.

#include <stdio.h>
    int main()
{
    int n1, n2, divisao;
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &n2);
    divisao = n1 / n2;
    printf("A divisao e: %d", divisao);
    return 0;
}

8. Leia dois inteiros e mostre o resto da divisão.

#include <stdio.h>
    int main()
{
    int n1, n2, resto;
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &n2);
    resto = n1 % n2;
    printf("A divisao e: %d", resto);
    return 0;
}

9. Leia dois float e calcule a média.

#include <stdio.h>
    int main()
{
    float n1, n2, media;
    printf("Digite o primeiro numero decimal: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero decimal: ");
    scanf("%f", &n2);
    media = (n1 + n2) / 2;
    printf("A media e: %f", media);
    return 0;
}

10. Leia base e altura de um retângulo e calcule a área.

#include <stdio.h>
    int main()
{
    float base, altura, area;
    printf("Digite a base do retangulo:\n");
    scanf("%f", &base);
    printf("Digite a altura do retangulo:\n");
    scanf("%f", &altura);
    area = base * altura;
    printf("A area do retangulo e: %.2f\n", area);
    return 0;
}

11. Leia o lado de um quadrado e calcule a área.

#include <stdio.h>
    int main()
{
    float lado, area;
    printf("Digite o lado do quadradoo:\n");
    scanf("%f", &lado);
    area = lado * lado;
    printf("A area do quadrado e: %.2f\n", area);
    return 0;
}

12. Leia um valor real e mostre o dobro.

#include <stdio.h>
    int main()
{
    float valor;
    printf("Digite o valor real:\n");
    scanf("%f", &valor);
    valor *= 2;
    printf("O valor dobrado e: %.2f\n", valor);
    return 0;
}

13. Leia um inteiro e mostre antecessor e sucessor.

#include <stdio.h>
    int main()
{
    int inteiro;
    printf("Digite o valor interio:\n");
    scanf("%d", &inteiro);
    printf("O antecessor e: %d", --inteiro);
    printf("O sucessor e: %d", ++inteiro);
    return 0;
}

14. Leia um inteiro e informe se é maior que 10. 

#include<stdio.h>
int main()
{
    int inteiro;
    printf("Digite o valor interio:\n");
    scanf("%d", &inteiro);
    if (inteiro > 10)
    {
        printf("E maior que 10!");
    }
    else
    {
        printf("Nao e maior que 10!");
    }
    return 0;
}

15. Leia dois inteiros e informe se são iguais.

#include <stdio.h>
    int main()
{
    int inteiro1, inteiro2;
    printf("Digite o valor interio:\n");
    scanf("%d", &inteiro1);
    printf("Digite outro valor interio:\n");
    scanf("%d", &inteiro2);
    if (inteiro1 == inteiro2)
    {
        printf("Sao iguais");
    }
    else
    {
        printf("Nao sao iguais!");
    }
    return 0;
}

16. Leia uma idade e informe se é maior ou igual a 18.

#include <stdio.h>
    int main()
{
    int idade;
    printf("Digite sua idade:\n");
    scanf("%d", &idade);
    if (idade >= 18)
    {
        printf("E maior ou igaul a 18!");
    }
    else
    {
        printf("Nao e maior ou igua a 18!");
    }
    return 0;
}

17. Leia dois inteiros e mostre soma, subtração, multiplicação, divisão e resto.

#include <stdio.h>
                                                                int main()
{
    int n1, n2, soma, subtracao, multiplicacao, divisao, resto;
    printf("Digite o numero 1:\n");
    scanf("%d", &n1);
    printf("Digite o numero 2:\n");
    scanf("%d", &n2);
    soma = n1 + n2;
    subtracao = n1 - n2;
    multiplicacao = n1 * n2;
    divisao = n1 / n2;
    resto = n1 % n2;
    printf("A soma e: %d\n", soma);
    printf("A subtracao e: %d\n", subtracao);
    printf("A multiplicacao e: %d\n", multiplicacao);
    printf("A divisao e: %d\n", divisao);
    printf("O resto e: %d\n", resto);
    return 0;
}

18. Leia três notas e calcule a média.

#include <stdio.h>
    int main()
{
    float nota1, nota2, nota3, media;
    printf("Digite a nota 1:\n");
    scanf("%f", &nota1);
    printf("Digite a nota 2:\n");
    scanf("%f", &nota2);
    printf("Digite a nota 3:\n");
    scanf("%f", &nota3);
    media = (nota1 + nota2 + nota3) / 3;
    printf("%.2f", media);
    return 0;
}

19. Leia inicial do nome, idade e altura, e mostre os dados.

#include <stdio.h>
                                          int main()
{
    char inicial;
    int idade;
    float altura;
    printf("Digite a inicial do seu nome:\n");
    scanf("%c", &inicial);
    printf("Digite a sua idade:\n");
    scanf("%d", &idade);
    printf("Digite sua altura:\n");
    scanf("%f", &altura);
    printf("A inicial e: %c\n", inicial);
    printf("A idade e: %d\n", idade);
    printf("A altura e: %.2f\n", altura);
    return 0;
}
*/