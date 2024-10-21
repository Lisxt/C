/*Fazer um programa para receber 3 valores inteiros do usuário e mostrar a sua média (que 
pode não ser inteira).*/

#include <stdio.h>

int main(){

    float n1, n2, n3;

    printf("Insira 3 notas para ser feito a media:\n");
    scanf("%f %f %f", &n1, &n2, &n3);

    float media = (n1 + n2 + n3) / 3;

    printf("A media e %.2f", media);
} 