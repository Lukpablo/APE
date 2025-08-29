#include <stdio.h>

int main (){

int categoria;
int atleta = 1;
int amador = 2;
int profissional = 3;
char idade[120];

printf("Digite a idade: ");
scanf("%d", &idade);

printf("Digite a categoria de inscricao: ");
scanf("%d", &categoria);

if (idade <= 12 || categoria = 1){
    printf("Infantil Atleta");
} else if (idade <12 && categoria = 2){
    printf("Infantil Amador");
} else if (idade <12 && categoria = 3){
    printf("Infantil Profissional");

}
    

return 0;




}