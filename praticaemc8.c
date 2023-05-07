/*4.8 Faça um programa que receba um número inteiro
e que verifique se esse número é par ou se é ímpar.
O programa deve informar ao usuário o número
apenas se for par e maior que 15 e se for ímpar apenas
se for menor que 50.*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>;
int main(){
    int num;
    printf("Escreva um numero inteiro: ");
    scanf("%d",&num);
    if(num%2==0 && num>15){
        printf("o numero eh par e maior que 15");
        
    } else if(num%2==1 && num<50){
        printf("o numero eh impar e menor que 50");
        
    } else{
        printf("O numero digitado nao satifaz nenhuma das condicoes.");
    }

    return 0;
}