#include <stdio.h>

int main (){

int primeiroNum, segundoNum;
float quociente, resto;

printf ("Digite o primeiro numero:\n");
scanf ("%d", &primeiroNum);
fflush(stdin);

printf ("\nDigite o segundo numero:\n");
scanf ("%d", &segundoNum);
fflush(stdin);

quociente = primeiroNum / segundoNum;
resto = primeiroNum % segundoNum;

printf ("Quociente = %.2f\nResto = %.2f\n", quociente, resto);

}