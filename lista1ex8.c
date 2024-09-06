#include <stdlib.h>
#include <stdio.h>

int main() {

    int num, a, tam, binario[15];
    int i;

    printf("Digite o numero para converter: ");
    scanf("%d", &num);

    a = num;
    i = 0;

    do {

        binario[i] = a % 2;
        a = a / 2;
        tam = i;
        i++;

    } while (a != 0);

    printf("%d em binario: ", num);

    for(i = tam; i >= 0; i--) {

        printf("%d", binario[i]);
    }


    return 0;
}
