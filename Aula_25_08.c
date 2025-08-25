#include <stdio.h>

int main(){

int a,b;

printf("Digite o valor de a: ");
scanf("%d",&a);

printf("Digite o valor de b: ");
scanf("%d",&b);

if (a>b){
    printf("O valor de a e maior que o valor b");
} else if (a==b){
    printf("Os valores a e b sao iguais");
} else{
    printf("o valor b e maior que o valor a");
}


return 0;

}