/*Fazer um programa que recebe 3 valores não inteiros do usuário e mostra o maior deles, o 
menor deles e o valor intermediário.*/

#include  <stdio.h>

int main(){
   float a,b,c;

    printf("Insira 3 valores:\n");
    scanf("%f %f %f", &a, &b, &c);

    if(a > b && a > c){
      printf("O maior valor e o %.2f\n", a);
    } else if (b > a && b > c){
      printf("O maior valor e o %.2f\n", b);
    } else{
      printf("O maior valor e o %.2f\n", c);
    }

    if(a < b && a < c){
      printf("O menor valor e o %.2f\n", a);
    } else if (b < a && b < c){
      printf("O menor valor e o %.2f\n", b);
    } else{
      printf("O menor valor e o %.2f\n", c);
    }

    if(b > a && a > c){
      printf("O intermediario é valor e o %.2f\n", a);
    } else if (a > b && b > c){
      printf("O intemediario valor e o %.2f\n", b);
    } else{
      printf("O intermediario valor e o %.2f\n", c);
    }

}