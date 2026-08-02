/*A nota final de um estudante é calculada apartir de 3 notas atribuídas respectivamente de um trabalho de laborátorio, 
uma avaliação semestral e a um exame final. Com pesos 2, 3 e 5 respectivamente.
Faça um programa que receba 3 notas, mostre a média ponderada e o seguinte conceito: A(10-8) B(8-7) C(7-6) D(6-5) E(5-0). */

#include<stdio.h>

int main(){
    float trab_lab, aval_sem, exam_fin, nota_final;

    printf("Digite a nota do trabalho de laboratorio:\n");
    scanf("%f", &trab_lab);
    printf("Digite a nota da avaliacao semestral:\n");
    scanf("%f", &aval_sem);
    printf("Digite a nota do exame final:\n");
    scanf("%f", &exam_fin);

    nota_final = ((trab_lab * 2) + (aval_sem * 3) + (exam_fin * 5)) / 10;
    
    if(nota_final >= 8){
        printf("Nota final: A\n");
    }else if(nota_final >= 7){
        printf("Nota final: B\n");
    }else if(nota_final >= 6){
        printf("Nota final: C\n");
    }else if(nota_final >= 5){
        printf("Nota final: D\n");
    }else{
        printf("Nota final: E\n");
    }

    return 0;
}