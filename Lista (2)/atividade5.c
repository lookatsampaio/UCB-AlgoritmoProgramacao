#include <stdio.h>

int main(){

    float a, b;

    printf("Digite o valor de A:");
    scanf("%f", &a);
    fflush(stdin);

    printf("Digite o valor de B:");
    scanf("%f",&b);
    fflush(stdin);

    printf("\n\n\n%f + %f = %f\n\n\n", a, b, (a+b));

}