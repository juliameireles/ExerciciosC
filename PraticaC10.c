/*4.10 Escreva um programa que informe o valor de uma
corrida de taxi. Para calcular o valor da corrida é
necessário saber a distância percorrida em quilômetros
e qual o tipo da bandeira da corrida, 1 ou 2. Caso a
bandeira seja 1, o preço do quilometro percorrido é
de R$ 1,80, se a bandeira for 2 o valor é de R$ 2,30.
Escreva um programa em linguagem C que solicite a distância 
percorrida em quilômetros e qual o tipo da
bandeira da corrida e informe o valor da corrida.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    //valor da corrida = distancia percorrida em km * 1,80 ou distancia percorrida em km * 2,30
    float kmpercorrido,valorcorrida;
    int bandeira;
    printf("Informe a distancia percorrida em quilometros: ");
    scanf("%f",&kmpercorrido);
    printf("Informe o tipo de bandeira da corrida (1 ou 2): ");
    scanf("%d",&bandeira);
    if(bandeira==1){
        valorcorrida= kmpercorrido * 1.80;
        printf("O valor da corrida eh: %.2f",valorcorrida);
    }else if(bandeira==2){
        valorcorrida= kmpercorrido * 2.30;
        printf("O valor da corrida eh: %.2f",valorcorrida);
    }
    return 0;
}