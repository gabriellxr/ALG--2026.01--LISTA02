#include <stdio.h>
#include <stdlib.h>

int main() {
    char letra;

    printf("digite uma letra:");
    scanf("%c", &letra);

    if (letra == 'a' || letra == "e" || letra == 'i' || letra == 'o' || letra == 'u') {
        printf("%c e uma vogal\n", letra);
    }
    else {
        printf("%c e uma consoante\n", letra);
    }

    system("pause");
    return 0;
}
