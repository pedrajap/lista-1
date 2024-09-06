#include <stdlib.h>
#include <stdio.h>

int main() {

    int a, b, c, d, e, f, g, h;
    int p, r, q;
    char n;

    printf("Digite o dígito 1 do seu RG: ");
    scanf("%d", &a);
    printf("Digite o dígito 2 do seu RG: ");
    scanf("%d", &b);
    printf("Digite o dígito 3 do seu RG: ");
    scanf("%d", &c);
    printf("Digite o dígito 4 do seu RG: ");
    scanf("%d", &d);
    printf("Digite o dígito 5 do seu RG: ");
    scanf("%d", &e);
    printf("Digite o dígito 6 do seu RG: ");
    scanf("%d", &f);
    printf("Digite o dígito 7 do seu RG: ");
    scanf("%d", &g);
    printf("Digite o dígito 8 do seu RG: ");
    scanf("%d", &h);

    p = (2 * a) + (3 * b) + (4 * c) + (5 * d) + (6 * e) + (7 * f) + (8 * g) + (9 * h);
    r = p % 11;
    q = 11 - r;

    if (q >= 0 && q <= 9)
        n = q + '0';
    else
        n = 'X';

    printf("RG: %d%d.%d%d%d.%d%d%d-%c", a, b, c, d, e, f, g, h, n);


    return 0;
}
