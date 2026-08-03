/*O custo de um carro novo ao consumidor final é o preço de fábrica somado ao percentual de lucro do distribuidor, 
acrescido dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fábrica de um veículo,
o percentual de lucro do distribuidor e o percentual de impostos. Em cada item, crie uma função distinta para calcular e retornar:  
a) o valor correspondente ao lucro do distribuidor;  
b) o valor correspondente aos impostos;  
c) o preço final do veículo.
Após criar cada uma das funções, desenvolva um algoritmo que declare e invoque cada uma das funções, mostrando o lucro do distribuidor,
os impostos e o valor final do veículo.*/

#include<stdio.h>

    float profit (float fac_price, float seller_percentage) {
        return fac_price * seller_percentage;
    }

    float taxes (float fac_price, float tax_percentage) {
        return fac_price * tax_percentage;
    }
    
    float final_price (float fac_price, float taxes,float profit) {
        return fac_price + taxes + profit;
    }

int main(){
    float fac_price, sel_percentage, tax_percentage,  p, t, fp;

    printf("Type the factory price of the veichle: \n");
    scanf("%f", &fac_price);
    printf("Type the percentage of the seller: \n");
    scanf("%f", &sel_percentage);
    printf("Type the tax percentage: \n");
    scanf("%f", &tax_percentage);

    p = profit(fac_price, sel_percentage);
    t = taxes(fac_price, tax_percentage);

    fp = final_price(fac_price, t, p);

    printf("The final price of the veichle is: %.2f \n", fp);

    return 0;
}

