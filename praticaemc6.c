/*4.6 Desenvolva um programa para comparar a idade de
Pedro, de Joana e de Ismael e informar quem é o mais
velho. Dados de entrada: idade de Pedro, de Joana e
de Ismael (tipo das variáveis: inteiro, e valor em anos).
Considere que essas pessoas possuem idades diferentes.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int p,j,i;
    printf("Informe a idade de Pedro: ");
    scanf("%d",&p);
    printf("Informe a idade de Joana: ");
    scanf("%d",&j);
    printf("Informe a idade de Ismael: ");
    scanf("%d",&i);
    if(p>j && p>i){
        printf("Pedro eh o mais velho!");
    }else if(i>j && i>p){
        printf("Ismael eh o mais velho!");
    }else if(j>p && j>i){
        printf("Joana eh o mais velha!");
    }
    return 0;
}