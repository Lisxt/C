/*Fazer um programa que recebe duas notas parciais de um aluno (0 a 100) e informa se ele 
está  aprovado  (média  maior  ou  igual  a  70),  em  exame  final  (média  entre  40  e  69)  ou 
reprovado (média menor do que 40). Caso esteja em exame o programa deve pedir a nota do 
exame (0 a 100) e informar se o aluno está aprovado (média mais nota do exame maior ou 
igual a 100) ou reprovado (média mais nota do exame menor do que 100).*/

#include <stdio.h>

int main(){
   
    float n1, n2;

    printf("Quais são as notas parciais?\n");
    scanf("%f %f", &n1, &n2);

    float media = n1 + n2;

    if (media >= 70) {
        printf("Aluno Aprovado!!");
    } else if (media <= 69 && media >= 40) {
        printf("Aluno vai para o exame final!!");
    } else {
        printf("Aluno Reprovado!!");
    }

}