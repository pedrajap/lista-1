#include <stdio.h>
#include <stdlib.h>

int main() {
    int ni;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &ni);

    while (ni > 1) {
        if (ni % 2 == 0) {
            ni = ni / 2;
        } else {
            ni = 3 * ni + 1;
        }
        printf("Próximo número: %d\n", ni);
    }

    return 0;
}
