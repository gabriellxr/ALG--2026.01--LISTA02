#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("Calculando a soma de todos os numeros 4 no domino\n\n");

    int i, soma = 2;

    for (i = 1; i < 7; i++) {
        soma += (4 + 1);
    }

    printf("A soma das pecas com 4 e: %d\n\n", soma);

    system("pause");
    return 0;
}
