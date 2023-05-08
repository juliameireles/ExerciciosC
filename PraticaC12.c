/*4.12 Escreva um programa que informe o valor de uma
corrida de taxi em Brasília. A diferença em relação
ao exercício anterior é que alguns taxis oferecem um
desconto de 30%. Altere o programa do exercício
anterior para que solicite se a corrida possui ou não
desconto de 30% (1 – sim, 2 – não).*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    float kmpercorrido,valorcorrida;
    int bandeira;
    int possui_desconto;
    printf("ATENCAO-->TAXA MINIMA DE 3,50\n");
    printf("Informe a distancia percorrida em quilometros: ");
    scanf("%f",&kmpercorrido);
    printf("Informe o tipo de bandeira da corrida (1 ou 2): ");
    scanf("%d",&bandeira);


    printf("Informe se a corrifa possui desconto: (1 --> sim, 2 --> nao): ");
    scanf("%d",&possui_desconto);

    if(possui_desconto==2){

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
    }
    if(possui_desconto==1){
    if(bandeira==1){
    if(kmpercorrido*1.80>=3.50){
        valorcorrida= (kmpercorrido * 1.80)*0.7;
        printf("O valor da corrida com desconto de 30 por cento eh: %.2f",valorcorrida);
    }else{
    valorcorrida = 3.50;
     printf("O valor da corrida eh: %.2f",valorcorrida);
    }
    }
    if(bandeira==2){
        if(kmpercorrido*2.30>=3.50){
        valorcorrida= (kmpercorrido * 2.30)*0.7;
        printf("O valor da corrida com desconto de 30 por cento  eh: %.2f",valorcorrida);
    }else{
    valorcorrida = 3.50;
     printf("O valor da corrida eh: %.2f",valorcorrida);
    }
}
}
    return 0;
}