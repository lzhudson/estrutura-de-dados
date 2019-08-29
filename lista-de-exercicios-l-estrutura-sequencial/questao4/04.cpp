#include <stdio.h>
int main() {
    int numVendedor, numCarrosVendidos;
    float valorCarros, salarioVendedor, salarioFinal;
    printf("Digite o numero do vendendor: ");
    scanf("%d", &numVendedor);
    printf("Digite o numero de carros vendidos: ");
    scanf("%d", &numCarrosVendidos);
    printf("Digite o valor dos carros vendidos: ");
    scanf("%f", &valorCarros);
    printf("Digite o salario do vendedor: ");
    scanf("%f", &salarioVendedor);
    salarioFinal = (numCarrosVendidos * ((valorCarros*0.05)/100)) + salarioVendedor;
    printf("Salario final do vendedor eh: %f", salarioFinal);


}
