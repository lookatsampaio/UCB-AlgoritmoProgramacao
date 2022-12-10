#include<stdio.h>
#include<math.h>

int main () {
    float x1, x2, y1, y2, p1, p2, dist;

    printf("DIGITE OS SEGUINTES VALORES:\nx1\nx2\ny1\ny2\n");
    scanf("%f%f%f%f", &x1, &x2, &y1, &y2);
    fflush(stdin);

    p1 = x2 - x1;
    p2 = y2 - y1;

    dist = sqrt(pow(p1,2) + pow(p2,2));


    printf("A distancia entre X e Y e de: %.4f", dist);  
}