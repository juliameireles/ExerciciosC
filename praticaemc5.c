/*4.5 Escreva um programa em C que calcule o volume de
um cilindro circular, dados o seu raio e sua altura.
Observação: V = πx r2 x h, em que π=3,14, r = raio
e h = altura.*/
#include <math.h>
#include <stdio.h> 
#define PI  3.14
int main(){
    double r,h,V;
    printf("Informe o raio da base cilindro circular: ");
    scanf("%lf",&r);
    printf("Informe a altura do cilindro circular: ");
    scanf("%lf",&h);
    double quadradoraio = pow(r,2.0);
    V = PI * quadradoraio * h;
    printf("O volume do cilindro circular eh: %.2lf",V);
    return 0;
}