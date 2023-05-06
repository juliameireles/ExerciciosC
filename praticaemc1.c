/*4.1 Desenvolva um programa para comparar a idade de
Pedro e a de Joana e informar quem é o mais velho.
Dados de entrada: idade de Pedro e de Joana (tipo
das variáveis: inteiro, e valor em anos). Observação:
essas pessoas possuem idades diferentes.*/
#include <stdlib.h>
#include <stdio.h>
int main(){
    int p,a;
    printf("ATENÇÃO: As idades nao devem ser iguais!\n");
    printf("Informe a idade de Pedro: ");
    scanf("%d",&p);
    printf("Informe a idade de Joana: ");
    scanf("%d",&a);
    if(p<=0 || a<=0){
        printf("eles nao podem ter idades negativas ou iguais a 0");
        
    }
    if(p>a && p!=0 && a!=0 && p>0 && a>0){
    printf("pedro eh o mais velho");
    }else if(a>p && a!=0 && p!=0 && p>0 && a>0){
    printf("Joana eh a mais velha");
    }









    return 0;
}