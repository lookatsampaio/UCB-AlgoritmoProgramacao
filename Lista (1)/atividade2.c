#include <stdio.h>
#include <math.h>

int main (){

int raio;
float area;

printf ("Digite o raio do circulo\n");
scanf ("%d", &raio);
fflush(stdin);

area = 3.14 * pow(raio,2);

printf ("A area do circulo equivale a %.2f", area);

}