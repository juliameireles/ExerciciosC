/*4.2 Desenvolva um programa para calcular e para
comparar a área de dois retângulos A e B. O programa
deverá informar qual retângulo possui a maior área
ou se possuem tamanhos iguais. Dados de entrada:
tamanho da base e da altura (tipo das variáveis:
inteiro, valor em centímetros)*/
#include <stdlib.h>
#include <stdio.h>
int main(){

    float A[2],B[2],areaB,areaA;
    // base é 0 e altura é 1
    printf("Infome a base de A em cm: ");
    scanf("%f",&A[0]);
    printf("Infomre a base de B em cm: ");
    scanf("%f",&B[0]);
    printf("Informe altura de A em cm: ");
    scanf("%f",&A[1]);
    printf("Informe altura de B em cm: ");
    scanf("%f",&B[1]);
    areaA = A[0] * A[1];
    areaB = B[0] * B[1];
    printf("=======RESULTADOS======\n");
    printf("area do retangulo A: %.2f cm\n",areaA);
    printf("area do retangulo B: %.2f cm\n",areaB);
    if(areaA > areaB){
        printf("O retangulo A tem a maior area");
    }else if(areaA<areaB){
        printf("O retangulo B tem a maior area");
    }else if(areaA==areaB){
        printf("O retangulo B e retangulo A tem areas iguais");
    }
    return 0;
}