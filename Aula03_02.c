#include <stdio.h>

int main (){

    //definiçao de variável//
    int valor1 = 10;
    int valor2 = 15;
    int valor3 = 20;
    int soma;

    printf("Digite o _valor1");
    scanf("%d", &valor1);

    printf("Digite o _valor2");
    scanf("%d", &valor2);

    printf("Digite o _valor3");
    scanf("%d", &valor3);

    soma = valor1 + valor2 + valor3;

printf("A soma de %d + %d + %d e igual a %d\n", valor1, valor2, valor3, soma);

    return 0;
}