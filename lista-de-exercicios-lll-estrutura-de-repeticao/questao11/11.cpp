#include <stdio.h>
main() {
    float altura;
    char sexo;
    int numPessoas = 10;
    float menorAltura, mediaAlturasMulheres, pessoaMaisAlta;
    int numHomens, numMulheres;
    char sexoMaisAlta;
    menorAltura = 900;
    mediaAlturasMulheres = 0;
    pessoaMaisAlta = 0;
    numMulheres = 0;
    numHomens = 0;
    for(int i = 0; i < numPessoas; i++) {
        printf("Digite a altura: ");
        scanf("%f", &altura);
        printf("Digite o sexo: (M ou F)");
        scanf("%s", &sexo);
        if(altura < menorAltura){
            menorAltura = altura;
        }
        if(sexo == 'F'){
            mediaAlturasMulheres += altura;
            numMulheres++;
        }
        if(sexo == 'M'){
            numHomens++;
        }
        if(altura > pessoaMaisAlta){
            sexoMaisAlta = sexo;
        }
    }
    printf("A menor altura do grupo : %.2f", menorAltura);
    printf("\nA media de altura das mulheres : %.2f", mediaAlturasMulheres);
    printf("\nO numero de homens : %d", numHomens);
    printf("\nO sexo da pessoa mais alta: %c", sexoMaisAlta);


}
