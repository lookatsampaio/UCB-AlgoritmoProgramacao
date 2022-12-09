#include <stdio.h>

int main(){
		
	float primeiraNota, segundaNota, mediaPonderada;
			
	printf("Digite a primeira nota do aluno (0 a 10.0):\n ");
	scanf("%f", &primeiraNota);

    printf("Digite a segunda nota do aluno (0 a 10.0):\n ");
	scanf("%f", &segundaNota);
		
	mediaPonderada = ((primeiraNota * 3.5) + (segundaNota * 7.5) / 11);

    printf ("\n\n\nMedia do aluno = %.1f", mediaPonderada);

}