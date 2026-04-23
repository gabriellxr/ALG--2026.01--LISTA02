#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2, n3, media;
    printf("digite o primeiro valor: ");
    scanf("%f", &n1);

    printf("digite o segundo valor: ");
    scanf("%f", &n2);

    printf("digite o terceiro valor: ");
    scanf("%f", &n3);

    media = (n1 + n2+ n3) / 3;

    printf("a media e: %.2f\n", media);

    system("pause");
    return 0;
}
1