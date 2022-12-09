#include <stdio.h>
#include <string.h>

int main (){

    char nome[30], sexo[1], matricula[8];

    float horasTrabalhadas, valorHora, salario;

    printf("Digite seu nome:\n ");
	scanf("%s", &nome);
    fflush(stdin);

    printf("Digite seu sexo (M - Masculino ou Feminino - F):\n ");
	scanf("%s", &sexo);
    fflush(stdin);

    printf("Digite sua matricula:\n ");
	scanf("%s", &matricula);
    fflush(stdin);

    printf("Digite a quantidade de horas trabalhadas:\n ");
	scanf("%f", &horasTrabalhadas);
    fflush(stdin);

    printf("Digite o valor pago por hora:\n ");
	scanf("%f", &valorHora);
    fflush(stdin);

    salario = horasTrabalhadas * valorHora;

    printf("\n\n\nNOME:\n %s\nSEXO:\n %s\nMATRICULA:\n %s\nHORAS TRABALHADAS:\n %.2fh\nVALOR DA HORA:\n R$%.2f\nSALARIO:\n R$%.2f", nome, sexo, matricula, horasTrabalhadas, valorHora, salario);

}
