#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, a, b, resto;

    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);

    a= n1; b = n2;

    do{
        resto = a % b;
        a = b;
        b = resto;
    }while(resto !=0);
    printf("O MDC entre %d e %d = %d.\n",n1,n2,a);

    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);
    for(a=1; a>0; a++){
         resto = (n1*a) % n2;
         if(resto==0) break;
     }
     printf("O MMC entre %d e %d e: %d\n", n1,n2,n1*a);
     system("pause");
}
