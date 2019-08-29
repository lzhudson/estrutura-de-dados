#include <stdio.h>
int main(){
    float alturaCilindro, raioCilindro, volumeCilindro, areaCilindro;
    float pi = 3.14;
    printf("Digite a altura do cilindro: ");
    scanf("%f", &alturaCilindro);
    printf("Digite o raio do cilindro: ");
    scanf("%f", &raioCilindro);
    volumeCilindro = pi * (raioCilindro*raioCilindro)* alturaCilindro;
    areaCilindro = 2 * pi * raioCilindro;

    printf("\nO volume do cilindro eh: %f", volumeCilindro);
    printf("\nA area do cilindro eh: %f", areaCilindro);


}
