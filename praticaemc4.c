/*4.4 Faça um programa que receba um número inteiro e
que verifique se esse número é par ou ímpar*/
#include <stdlib.h>
#include <stdlib.h>
int main(){
    int num;
    printf("Escreva um numero inteiro: ");
    scanf("%d",&num);
    if(num % 2 == 0){
        printf("Este numero eh par");
    }else{
        printf("Este numero eh impar");
    }
    return 0; 
}