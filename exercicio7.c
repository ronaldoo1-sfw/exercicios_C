#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char team[30];
    char version[20];
    char type[10];
    char size[5];
    int year;
}shirt;

shirt adding(){
}

int main(){

int amount;

printf("Type the amount of shirts you want to add:\n");
scanf("%d", &amount);

shirt *list = (shirt*) calloc(amount, sizeof(shirt));

}