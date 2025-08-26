#include <stdio.h>

int main (){

float nota;
int falta;

printf("Digite a sua nota");
scanf("%f", &nota);

printf("Digite a quantidade de faltas");
scanf("%d", &falta);

if (nota >=9 && falta <=20){
    printf("Voce esta aprovado");
} else if (nota >=7 && falta <=15){
    printf("Voce esta aprovado");
} else if (nota >=5 && falta <15){
    printf("Voce esta de recuperacao");
} else {
    printf("Voce esta reprovado");
}


return 0;
}

