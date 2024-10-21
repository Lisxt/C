/*a. receber do usuário um tempo em segundos, correspondente à duração de um evento 
qualquer (por ex. jogo de futebol) 
b. calcular e mostrar ao usuário o tempo equivalente em horas, minutos e segundos */

#include <stdio.h>

int main(){

    int seg;

    printf("Insira os segundos para ser feito conversao:\n");
    scanf("%d", &seg);

    int min = seg / 60;
    int horas = min / 60;

    printf("%d horas, %d minutos, %d segundos", horas, min, seg);

}