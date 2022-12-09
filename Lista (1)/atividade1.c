#include <stdio.h>

int main (){

    int horas, segundos, minutos;

    printf ("Digite as horas\n");
    scanf ("%d", &horas);
    fflush(stdin);

    minutos = horas * 60;
    segundos = minutos * 60;

    printf ("\n\n\n%dh equivale(m):\n\nEM MINUTOS\n%dmin\nEM SEGUNDOS\n%ds", horas, minutos, segundos);

}