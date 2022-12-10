#include <stdio.h>

int main(){

    float salario, totalVendas;
    char nome[30];
    

    printf("INFORME\nNOME\nSALARIO\nVENDAS NO MES\n");
    scanf("%s%f%f", &nome, &salario, &totalVendas);
    fflush(stdin);

 
    printf("\n\n\nTOTAL A RECEBER = R$%.2f\n\n\n",(salario + (totalVendas * 0,15)) );

}