#include <stdio.h>

int main(){

    int a, b, prod;

    printf("Digite o valor de A:");
    scanf("%d", &a);
    fflush(stdin);

    printf("Digite o valor de B:");
    scanf("%d",&b);
    fflush(stdin);

    prod = a * b;
    
    printf("\n\n\nPROD = %d\n\n\n", prod);

}