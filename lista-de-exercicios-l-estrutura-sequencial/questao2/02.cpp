#include <stdio.h>
int main(){
    float massa, altura,IMC;
    printf("Digite seu peso: ");
    scanf("%f", &massa);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    IMC = massa / (altura * altura);
    printf("Seu IMC eh de %.2f", IMC);
}
