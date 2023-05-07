/*4.11 Escreva um programa para informar o valor de
uma corrida de taxi que considere o valor mínimo
da corrida. Ou seja, ao entrar no taxi, o cliente
deve pagar um valor mínimo de R$ 3,50, mesmo
que o tamanho da corrida seja inferior a esse valor.
O programa deve considerar as informações do
exercício anterior.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    float kmpercorrido,valorcorrida;
    int bandeira;
    printf("Informe a distancia percorrida em quilometros: ");
    scanf("%f",&kmpercorrido);
    printf("Informe o tipo de bandeira da corrida (1 ou 2): ");
    scanf("%d",&bandeira);

 printf("ATENCAO-->TAXA MINIMA DE 3,50\n");
    if(bandeira==1){
        if(kmpercorrido*1.80>=3.50){
        valorcorrida= kmpercorrido * 1.80;
        printf("O valor da corrida eh: %.2f",valorcorrida);
    }else{
    valorcorrida = 3.50;
     printf("O valor da corrida eh: %.2f",valorcorrida);
    }
    }

      if(bandeira==2){
        if(kmpercorrido*2.30>=3.50){
        valorcorrida= kmpercorrido * 2.30;
        printf("O valor da corrida eh: %.2f",valorcorrida);
    }else{
         valorcorrida = 3.50;
         printf("O valor da corrida eh: %.2f",valorcorrida);
    }
    }
    return 0;
}
