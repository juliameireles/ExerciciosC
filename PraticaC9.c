/*4.9 Escreva um programa em C que calcule o volume de
dois cilindros circulares e que verifique qual deles é
maior. O raio e altura dos cilindros serão informados
pelo usuário. Observação: Vπx r2 x h, em que π=3,14,
r = raio e h = altura.*/
#include <stdio.h>
#include <math.h>
#define PI 3.14
int main(){
    double volume1,volume2,raio,altura;
    printf("Digite o raio do primeiro cilindro circular: ");
    scanf("%lf",&raio);
    printf("Digite a altura do primeiro cilindro circular: ");
    scanf("%lf",&altura);
    double quadradoraio1 = pow(raio,2);
    volume1 = PI * quadradoraio1 * altura;

    printf("Digite o raio do segundo cilindro circular: ");
    scanf("%lf",&raio);
    printf("Digite a altura do segundo cilindro circular: ");
    scanf("%lf",&altura);
    double quadradoraio2 = pow(raio,2);
    volume2 = PI * quadradoraio2 * altura;

    printf("========RESULTADO========\n");
    printf("O volume do primeiro cilindro eh:%.2lf\n",volume1);
    printf("O volume do segundo cilindro eh: %.2lf\n",volume2);

    if(volume1>volume2){
    printf("O cilindro de maior volume eh o primeiro: %.2lf",volume1);
    }else if(volume2>volume1){
    printf("O cilindro de maior volume eh o segundo: %.2lf",volume2);
    }else if(volume1==volume2){
    printf("Os cilindros tem volumes iguais");
    }

        return 0;
}