/*Escreva um programa que calcule o salário semanal de um trabalhador. As entradas são o 
número  de  horas  trabalhadas  na  semana  e  o  valor  da  hora.  Até  40  h/semana  não  se 
acrescenta nenhum adicional. Acima de 40h e até 60h há um bônus de 50% para essas horas. 
Acima de 60h há um bônus de 100% para essas horas.*/

#include <stdio.h>

int main(){

    int trabalhadas, horas, total;

    printf("Numeros de horas trabalhadas e valor da hora trabalhada:\n");
    scanf("%d %d", &trabalhadas, &horas);

    total = trabalhadas * horas;

    if (trabalhadas<=40){
        printf("Sem acrecimo");
    } else if(trabalhadas > 40 && trabalhadas <= 60){
        
        printf("Acrecimo de 50 por cento\n");
       
        total += (total * 0.5);
        
        printf("Salario com o bonus R$%d\n", total);

    } else {
       
        printf("Acrecimo de 100 por cento\n");
       
        total += (total * 1);

        printf("Salario com o bonus R$%d\n", total);
    }
}