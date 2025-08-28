#include <stdio.h>

int main(){

float nota1, nota2, nota3, media;
int frequencia;

printf("Digite a primeira nota: ");
scanf("%f", &nota1);

printf("Digite a segunda nota: ");
scanf("%f", &nota2);

printf("Digite a terceira nota: ");
scanf("%f", &nota3);

printf("Digite a frequencia do aluno em porcentagem: ");
scanf("%d", &frequencia);

media = (nota1 + nota2 + nota3) / 3.0;

if (media >= 7 && frequencia >= 75){
    printf("Resultado: Aluno APROVADO!\n");
} else {
    printf("Resultado: Aluno REPROVADO!\n");
}

return 0;

}