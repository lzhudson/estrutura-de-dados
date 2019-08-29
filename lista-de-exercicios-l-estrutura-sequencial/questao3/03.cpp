#include <stdio.h>
int main() {

    float tempFahrenheit, tempCelsius;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &tempFahrenheit);
    tempCelsius = (tempFahrenheit - 32) / 1.8;
    printf("%.1f", tempCelsius);
}
