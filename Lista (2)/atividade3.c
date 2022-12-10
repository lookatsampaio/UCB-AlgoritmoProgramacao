#include <stdio.h>
#include <stdbool.h>

int main(){

    int numeroInteiro, logico;
    float real1, real2;
    char letra, nome[30];

    printf("Digite o numero inteiro:\n");
    scanf("%d", numeroInteiro);
    fflush(stdin);

    printf("Digite os numeros reais:\n");
    scanf("%f%f", &real1, &real2);
    fflush(stdin);

    printf("Digite uma letra:\n");
    scanf("%c", &letra);
    fflush(stdin);

    printf("Digite um nome:\n");
    scanf("%s", &nome);
    fflush(stdin);

    printf("Digite 1 para Verdadeiro ou 0 para falso:\n");
    scanf("%d", &logico);
    fflush(stdin);

    printf("\n\n\n--------------------------------------------\n\n\n");

    printf("Numero Inteiro: %d\n", numeroInteiro);
    printf("Numeros Reais: \n %f \n %f\n",real1, real2);
    printf("Letra: %c\n", letra);
    printf("String: %s\n", nome);
    if (logico == 1) {

        printf("Logico: Verdadeiro");

    } else {

        printf("Logico: Falso");

    }

}