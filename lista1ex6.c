#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, g, h, i;
    int p, q;
    int x1,x2, r1, r2;

    printf("Digite o dígito 1 do seu CPF: ");
    scanf("%d", &a);
    printf("Digite o dígito 2 do seu CPF: ");
    scanf("%d", &b);
    printf("Digite o dígito 3 do seu CPF: ");
    scanf("%d", &c);
    printf("Digite o dígito 4 do seu CPF: ");
    scanf("%d", &d);
    printf("Digite o dígito 5 do seu CPF: ");
    scanf("%d", &e);
    printf("Digite o dígito 6 do seu CPF: ");
    scanf("%d", &f);
    printf("Digite o dígito 7 do seu CPF: ");
    scanf("%d", &g);
    printf("Digite o dígito 8 do seu CPF: ");
    scanf("%d", &h);
    printf("Digite o dígito 9 do seu CPF: ");
    scanf("%d", &i);

    x1 = (10 * a) + (9 * b) + (8 * c) + (7 * d) + (6 * e) + (5 * f) + (4 * g) + (3 * h) + (2 * i);
    r1 = x1 % 11;

    if(r1 < 2)
      p = 0;
    else
      p = 11 - r1;

    x2 = (11 * a) + (10 * b) + (9 * c) + (8 * d) + (7 * e) + (6 * f) + (5 * g) + (4 * h) + (3 * i) + (2 * p);
    r2 = x2 % 11;

    if(r2 < 2)
      q = 0;
    else
      q = 11 - r2;

    printf("CPF: %d%d%d.%d%d%d.%d%d%d-%d%d", a, b, c, d, e, f, g, h, i, p, q);

    return 0;
}
