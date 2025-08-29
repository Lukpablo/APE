#include <stdio.h>

int main(){


float nota1, nota2, nota3, media;
int faltas;

printf("Difite a primeira nota: ");
scanf("%f", &nota1);

printf("Digita a segunda nota: ");
scanf("%f", &nota2);

printf("Digite a terceira nota: ");
scanf("%f", &nota3);

printf("Digite a quantidade de faltas: ");
scanf("%d", &faltas);

media = (nota1 + nota2 + nota3)/3;
printf("Sua media e %f\n", media);

if (media == 0 && faltas >18) {
    printf("Sua nota e: SR");
} else if (faltas >18){
    printf("Reprovado por faltas!");
} else if (media >=9 && media <=10 && faltas <=18){
    printf("SS");
} else if (media <=7 && media <9 && faltas <=18){
    printf("MS");
} else if (media <=5 && media <7 && faltas <=18){
    printf("MM");
} else if (media <=3 && media <5 && faltas <=18){
    printf("MI");
} else if (media <=1 && media <3 && faltas <=18)
{    printf("II");


}


return 0;


}

