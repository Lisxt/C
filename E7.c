/*Fazer um programa que recebe um símbolo de operação do usuário (+, -, / ou *) e dois 
números reais. O programa deve retornar o resultado da operação recebida sobre estes dois 
números.*/

#include <stdio.h>

int main(){

    int oper;
    int n1, n2;
    char exp;

    printf("Insira uma operação matematica:\n");
    scanf("%d %c %d", &n1, &exp, &n2);

    if(exp == '+') {
        oper = n1 + n2;
    } else if (exp == '-') {
        oper = n1 - n2;
    } else if (exp == '/') {
        oper = n1 / n2;
    } else if (exp == '*'){
        oper = n1 * n2;
    } else {
        printf("Operação incorreta!!");
        return 1;
    }

    printf("Resutado da operacao %d %c %d = %d", n1, exp, n2, oper);

}