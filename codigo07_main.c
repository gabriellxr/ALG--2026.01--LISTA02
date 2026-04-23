#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main() {
        int sorteado, tentativa, tentativas = 0;

        srand(time(NULL));
        sorteado = rand() % 101;

        do {
            printf("Digite sua tentativa: ");
            scanf("%d", &tentativa);
            tentativas++;

            if (tentativa < sorteado) {
                printf("O numero sorteado e MAIOR.\n");
            } else if (tentativa > sorteado) {
                printf("O numero sorteado e MENOR.\n");
            } else {
                printf("Parabens! Voce acertou.\n");
                printf("Quantidade de tentativas: %d\n", tentativas);
            }

        } while (tentativa != sorteado);

        system("pause");
        return 0;
    }
