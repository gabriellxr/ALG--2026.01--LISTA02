#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    int soma = 0;
    int ocorrencias = 0;

    printf("Calculando a soma de todos os numeros 4 no domino\n\n");

    for (i = 0; i <= 6; i++) {
        for (j = i; j <= 6; j++) {

            if (i == 4) {
                soma += 4;
                ocorrencias++;
            }

            if (j == 4) {
                soma += 4;
                ocorrencias++;
            }
        }
    }

    printf("O numero 4 aparece %d vezes.\n", ocorrencias);
    printf("A soma total de todos os numeros 4 e: %d\n", soma);

    system("pause");
    return 0;
}