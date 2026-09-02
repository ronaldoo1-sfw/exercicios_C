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

6. Faça um programa que leia 5 números inteiros e exiba a soma deles.

#include <stdio.h>

int main()
{
   int i, soma = 0, numeros[5];
   
   for(i=1; i<=5; i++){
       
       printf("Digite um numero: \n");
       scanf("%d", &numeros[i]);
       
       soma += numeros[i];
       
   }
   
   printf(" A soma e: %d", soma);
   

return 0;
}

7. Faça um programa que leia 10 números e conte quantos são positivos.

#include <stdio.h>

int main()
{
   int i, positivos = 0, numeros[10];
   
   for(i=0; i<=9; i++){
       
       printf("Digite um numero: \n");
       scanf("%d", &numeros[i]);
       
       if(numeros[i]>0){
           positivos++;
       }
       
   }
   
   printf("Total de positivos: %d", positivos);
   

return 0;
}

8. Faça um programa que leia 10 números e conte quantos são negativos.

#include <stdio.h>

int main()
{
   int i, positivos = 0, numeros[10];
   
   for(i=0; i<=9; i++){
       
       printf("Digite um numero: \n");
       scanf("%d", &numeros[i]);
       
       if(numeros[i]<0){
           positivos++;
       }
       
   }
   
   printf("Total de negativos: %d", positivos);
   

return 0;
}

9. Faça um programa que leia um número inteiro N e exiba a tabuada dele de 1 a 10.

#include <stdio.h>

int main(){
   
   int numero, i;
   
   printf("Digite um numero inteiro: \n");
   scanf("%d", &numero);
   
   for(i=1; i<=10; i++){
       
       printf("%d * %d = %d\n", numero, i, (numero * i));
   }

return 0;
}


10. Faça um programa que leia um número e exiba seu fatorial.

#include <stdio.h>

int main(){
   
   int numero, i, soma = 1;
   
   printf("Digite um numero inteiro: \n");
   scanf("%d", &numero);
   
  for(i=numero; i>0; i--){
      
    printf("%d * ", i);
    
    soma *= i;
     
  }
  
  printf("= %d", soma);

return 0;
}

11. Faça um programa que leia 10 números e calcule a média deles.

#include <stdio.h>

int main()
{
   int i, soma = 0, numeros[10];
   
   for(i=0; i<=9; i++){
       
       printf("Digite um numero: \n");
       scanf("%d", &numeros[i]);
       
       soma += numeros[i];
       
   }
   
   printf("Media: %d\n", (soma/10));
   

return 0;
}


12. Faça um programa que leia números até que o usuário digite 0, e ao final mostre a soma dos valores digitados.

#include <stdio.h>

int main()
{
   int i, soma = 0;
   
   do{
       printf("Digite um numero ou 0 para sair e ver a soma\n");
       scanf("%d", &i);
       
       soma += i;
       
   }while(i!=0);
   
   printf("A soma foi: %d", soma);

return 0;
}
*/