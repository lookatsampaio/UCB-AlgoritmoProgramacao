#include <stdio.h>

int main(){

    int a, b, c, d, diferenca;

    printf("Digite o valor de A, B, C, D:");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    fflush(stdin);

    diferenca = (a * b) - (c * d);
 
    printf("\n\n\nDIFERENCA = (%d * %d) - (%d * %d)\n\nDIFERENCA = %d\n", a, b, c, d, diferenca);

}