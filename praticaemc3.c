/*4.3 Escreva um programa que leia a quantidade de alunas
e de alunos. Depois esse programa deve informar se
essa turma possui mais alunos ou mais alunas. Se
essa turma possuir a quantidade de alunas maior que
a de alunos, informe o total de alunos dessa turma.
O programa deve verificar se a quantidade de alunos
é igual a de alunas.*/
#include <stdlib.h>
#include <stdlib.h>
int main(){
    int quantalunos,quantalunas;
    printf("Informe a quantidade de alunas: ");
    scanf("%d",&quantalunas);
    printf("Informe a quantidade de alunos: ");
    scanf("%d",&quantalunos);
    if(quantalunos>quantalunas){
        printf("Essa turma tem mais meninos que meninas");
    }else if(quantalunos<quantalunas){
        printf("Essa turma tem mais meninas que meninos\n");
        printf("O total de alunos eh: %d",quantalunos + quantalunas);
    }else if(quantalunos==quantalunas){
        printf("Essa turma tem a mesma quantidade de meninos e meninas: %d e %d",quantalunos,quantalunas);
    }

    return 0; 
}