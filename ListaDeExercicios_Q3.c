#include <stdio.h>

int main (){

int idade;

printf("Digite a sua idade: ");
scanf("d%", &idade);

if (idade >=18){
    printf("Voce pode votar e dirigir.\n");
}
else if (idade >= 16){
    printf("Voce pode votar, mas ainda nao pode dirigir.\n");
}
else {
    printf("Voce nao pode votar nem dirigir.\n");

}

return 0;


}