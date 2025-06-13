#include <stdio.h>

int main() {
    char nome[50];
    int idade, temIngresso;

    // Solicita as informações ao usuário
    printf("Digite o seu nome: ");
    scanf("%s", nome); 
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Possui ingresso (1 para Sim, 0 para Não): ");
    scanf("%d", &temIngresso);

    // Verifica se a pessoa tem 18 anos ou mais e possui ingresso
    if (idade >= 18 && temIngresso == 1) {
        printf("\nParabéns, %s! Acesso permitido.\n", nome);
    } else if (idade < 18) {
        printf("\nEntrada não permitida para menores de idade.\n");
    } else if (temIngresso == 0) {
        printf("\nÉ necessário possuir ingresso para entrar.\n");
    }

    return 0;
}