#include <stdio.h>

int main(){

float valor_a,valor_b;
float resultado;
char operacao;

printf("Digite o valor a:");
scanf("%f",&valor_a);

printf("Digite o valor b:");
scanf("%f",&valor_b);

printf("[S] Soma | [U]Subtracao | [M]Multiplicacao | [D]Divisao");
printf("Digite a operacao");
scanf("%s",&operacao);

if (operacao=='S'){
    resultado=valor_a+valor_b;
} else if (operacao=='U'){
    resultado=valor_a-valor_b;
} else if (operacao=='M'){
    resultado=valor_a*valor_b;
} else if (operacao=='D'){
    resultado=valor_a/valor_b;
}

printf("Meu resultado e %f",resultado);

return 0;


}