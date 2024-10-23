/*Escreva um programa para receber do usuário um mês (de 1 a 12) e um ano (de 0 D.C. em 
diante) e mostrar o número de dias daquele mês daquele ano. Utilizar switch e levar em 
consideração anos bissextos para o cálculo.*/

#include <stdio.h>
int Bissexto(int ano) {
    // Verifica se o ano é bissexto
    return  (ano % 4 == 0 && ano % 100 != 0);
}
int main(){

    int mes, ano, dias;
    printf("Entre com o numero referente ao seu mes:");
    scanf("%d", &mes);

    printf("Digite o ano (0 D.C. em diante): ");
    scanf("%d", &ano);

    switch (mes)
    {
    case 1 : //janeiro
    case 3 : //março
    case 5 : //maio
    case 7 : //julho
    case 8 : //agosto
    case 10 : //outubro
    case 12 : //dezembro

    dias = 31;
        break;
    
    case 4 : //abril
    case 6 : //junho
    case 9 : //setembro
    case 11 : //novembro
    dias = 30;
        break;

    case 2 : //fevereiro
    if(Bissexto(ano)){
        dias = 29;
    } else {
        dias = 28;}
    break;

    default:
        break;

    }
    printf("O mes %d do ano %d tem %d dias", mes, ano ,dias);
}