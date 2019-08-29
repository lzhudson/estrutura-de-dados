#include <stdio.h>
int main () {
    int idadePessoa;
    printf("Digite a idade: ");
    scanf("%d", &idadePessoa);
    //printf("%d", idadePessoa);
    printf("%d",(((365 * idadePessoa) * 24) * 60)* 60);
}
