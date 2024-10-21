/*Fazer um programa para ler um número do usuário e determinar se este número é par ou não 
par.*/

#include <stdio.h>
#include <math.h>

void determinar(int numero){
    if(numero % 2 == 0){
        printf("Numero e Par!!");
    } else {
        printf("Numero e Impar!!");
    }
}

int main(){

    int num;

    printf("Digite um numero para descobrir se e par ou impar:\n");
    scanf("%d", &num);

    determinar(num);
}