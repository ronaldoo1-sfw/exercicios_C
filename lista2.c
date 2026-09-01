/*1. Leia um número e informe se ele é positivo.

#include <stdio.h>
    int main()
{
    int inteiro;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &inteiro);
    if (inteiro > 0)
    {
        printf("E positivo!");
    }
    else
    {
        printf("Nao e positivo!");
    }
    return 0;
}

2. Leia um número e informe se ele é negativo ou não.

#include <stdio.h>
    int main()
{
    int inteiro;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &inteiro);
    if (inteiro < 0)
    {
        printf("E negativo!");
    }
    else
    {
        printf("Nao e negativo!");
    }
    return 0;
}

3. Leia um número inteiro e informe se é par ou ímpar.

#include <stdio.h>
    int main()
{
    int inteiro;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &inteiro);
    if (inteiro % 2 == 0)
    {
        printf("E par!");
    }
    else
    {
        printf("E impar!");
    }
    return 0;
}

4. Leia a idade de uma pessoa e informe se é maior ou menor de idade.

#include <stdio.h>
    int main()
{
    int idade;
    printf("Digite uma idade: \n");
    scanf("%d", &idade);
    if (idade >= 18)
    {
        printf("E maior de idade!");
    }
    else
    {
        printf("E menor de idade!");
    }
    return 0;
}

5. Leia dois números e informe qual é o maior.

#include <stdio.h>
    int main()
{
    int numero1, numero2;
    printf("Digite o primeiro numero: \n");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &numero2);
    if (numero1 > numero2)
    {
        printf("O numero 1 e maior que o numero 2");
    }
    else if (numero2 > numero1)
    {
        printf("O numero 2 e maior que o numero 1");
    }
    else
    {
        printf("Sao iguais");
    }
    return 0;
}
*/