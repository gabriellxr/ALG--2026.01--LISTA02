#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;
    unsigned long long fatorial = 1;

    printf("Digite um numero inteiro:");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Erro: Não existe fatorial para números negativos\n\n");
    }
    else if (numero == 0) {
        printf("0! = 1\n");
    }
    else {
        printf("%d! = ", numero);

        for (int i = numero; i > 0; i--) {
            fatorial *= i;
            printf("%d", i);

            if (i > 1) {
                printf(".");
            }
        }
        printf(" = %llu\n", fatorial);
    }
    
    system("pause");
    return 0;
}
