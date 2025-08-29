#include <stdio.h>

int main(){

int ladoA;
int ladoB;
int ladoC;

printf("Digite o lado a: ");
scanf("%d", ladoA);

printf("Digite o lado b: ");
scanf("%d", ladoB);

printf("Digite o lado c: ");
scanf("%d", ladoC);



if (ladoA < ladoB + ladoC == 1 && ladoB < ladoA + ladoC == 1 && ladoC < ladoA + ladoB == 1){
    printf("E um triangulo");
} else if (ladoA + ladoB != ladoC || ladoB + ladoC != ladoA){
    printf("Triangulo Isosceles");
}



return 0;

}