#include <stdio.h>
int main() {
    float preco = 100;
    float pi = 3.14;
    float raioLata, alturaLata;
    float areaLata;
    float precoLata;

    printf("Digite o raio da lata: ");
    scanf("%f", &raioLata);
    printf("Digite a altura da lata:");
    scanf("%f", &alturaLata);

    areaLata = (pi * (raioLata * raioLata) * 2) + (2 * pi * raioLata * alturaLata);
    printf("\n%f", areaLata);
    precoLata = areaLata * preco;
    printf("\n%f", precoLata);
}
