/*4.7 Faça um programa que receba um número inteiro
e que verifique se esse número é par ou ímpar.
O programa deve informar:
a) se o número é par, caso afirmativo informar também
se ele é maior que 15;
b) se o número é ímpar, caso afirmativo se ele é menor
que 50.*/
#include <stdio.h>
#include <stdlib.h> 
int main(){
    int num;
    printf("Informe um numero inteiro: ");
    scanf("%d",&num);
    if(num%2==0){
        if( num>15){
        printf("Este numero eh maior que 15. Este numero eh par");
        }else if(num %2 ==0 && num<15)
        printf("Este numero eh menor que 15. Este numero eh par");
        }
    if(num%2!=0){ 
        if(num%2!=0 && num==15){
        printf("Este numero eh igual a 15. Este numero eh impar.");
        }else if(num%2!=0 && num<50){
        printf("Este numero eh impar e menor que 50");
        }
        }
    return 0; 
}
