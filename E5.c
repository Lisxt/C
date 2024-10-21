/*Fazer um programa para receber valores inteiros X, Y e Z do usuário e determinar se estes 
valores podem formar os lados de um triângulo. Em caso afirmativo, informar se o triângulo 
é equilátero 3 lados iguais, isósceles 2 lados iguais ou escaleno. */

#include <stdio.h>

int main(){
    
    int x,y,z;

    printf("Insira 3 valores para saber se é um triangulo:\n");
    scanf("%d %d %d", &x, &y, &z);

    if(x + y > z && x + y > z && y + z > x){
        if(x == y && x == z ){
            printf("Triangulo equilatero!!");
        } else if (x == y || x == z || y == z){
            printf("Triangulo isosceles!!");
        } else {
            printf("Trinagulo escaleno!!");
        }
    } else {
        printf("Não formam um trialgulo!!");
    }

}