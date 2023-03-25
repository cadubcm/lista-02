#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    if (a == b && b == c) {
        printf("Numeros iguais\n");
    } else {
        int maior = a, menor = a;

        if (b > maior) {
            maior = b;
        } else if (b < menor) {
            menor = b;
        }

        if (c > maior) {
            maior = c;
        } else if (c < menor) {
            menor = c;
        }

        printf("Maior numero: %d\n", maior);
        printf("Menor numero: %d\n", menor);
    }

    return 0;
}