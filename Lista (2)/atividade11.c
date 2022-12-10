#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {

    float raio, volume, area;

    printf("Informe o valor do raio\n");
    scanf("%f", &raio);

    volume = 4/3.0 * PI * raio;
    area = 4 * PI * pow(raio,2);


    printf("O valor do volume eh: %f\n", volume);
    printf("O valor da area  eh: %f\n", area);

}