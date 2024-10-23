/*Escreva um programa que receba a velocidade 
máxima  em  uma  avenida  e  a  velocidade  com  que  um  motorista  estava  dirigindo  nela. 
Calcule a multa que o motorista vai receber, considerando que são pagos R$ 5,00 por cada 
km/h que estiver acima da velocidade permitida (considere apenas números inteiros). Se a 
velocidade do motorista estiver dentro do limite, o programa deve informar que não há 
multa. */

#include <stdio.h>

int main(){

    int velocidade, avenida;

    printf("Insira a velocidade maxima da avenida:");
    scanf("%d", &avenida);

    printf("Insira a velocidade do motorista:");
    scanf("%d", &velocidade);

    if(velocidade < avenida){
        printf("Nao ultrapassou a velocidade!!");
    } else {
        printf("Ultrapassou a velocidade, tera que pagar multa!!");
       
        int multa = velocidade - avenida;
        multa *= 5;

        printf("\nO valor da multa e R$%d reais", multa);
    }
}