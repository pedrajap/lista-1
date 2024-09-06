#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    int a, b, c;
    int delta;
    float x1, x2;
    float xv, yv;
    char concavidade[10];

    printf("Digite o primeiro coeficiente da parabola: ");
    scanf("%d", &a);
    printf("Digite o segundo coeficiente da parabola: ");
    scanf("%d", &b);
    printf("Digite o terceiro coeficiente da parabola: ");
    scanf("%d", &c);

    //calculo das raizes
    delta = pow(b, 2) - (4 * a * c);
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    //calculo da vertice da parabola
    xv = (float) (-b) / (2 * a);
    yv = (float) (-delta) / (4 * a);

    //concavidade
    if(a > 0)
        strcpy(concavidade, "positiva");
    else
        strcpy(concavidade, "negativa");

    printf("\nRaiz X1 = %.2f", x1);
    printf("\nRaiz X2 = %.2f", x2);

    printf("\nPonto do vertice Xv = %.2f", xv);
    printf("\nPonto do vertice Yv = %.2f", yv);

    printf("\nConcavidade da parabola: %s", concavidade);

    return 0;
}
