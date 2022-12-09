#include <stdio.h>

int main (){

    float primeiroNum, segundoNum, terceiroNum, resultado;

    printf ("Digite o primeiro numero:\n");
    scanf ("%f", &primeiroNum);
    fflush(stdin);

    printf ("\nDigite o segundo numero:\n");
    scanf ("%f", &segundoNum);
    fflush(stdin);

    printf ("\nDigite o terceiro numero:\n");
    scanf ("%f", &terceiroNum);
    fflush(stdin);

    resultado = (primeiroNum + segundoNum + terceiroNum) / 3;

    printf ("Media Aritmetica = %.2f", resultado);

}