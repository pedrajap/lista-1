#include <stdio.h>
#include <stdio.h>

int main()
{
    int n, x, i, primo;


    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &n);

    x = 2;


    if (n <= 1) {
        printf("O numero n�o � primo;");
    }else{
        for(i=2; i < n; i++){
            if(n%i==0){
                printf("N�o � primo");
            }
        }
        if(i==n){
            printf("� primo");
        }
    }
    return 0;
}
