#include <stdio.h>

int main(){
		
	int quantidadeMetros, metros, quantidadeRolos, rolos = 50;
			
	printf("Digite a quatidade necessaria de metros para atender a obra: ");
	scanf("%d", &metros);
		
	quantidadeRolos = (metros / rolos);
	quantidadeMetros = (metros % 50);

    printf ("\n\n\n%dQuantidade de rolos = %.2f\nQuantidade de metros", quantidadeRolos, quantidadeRolos);

}