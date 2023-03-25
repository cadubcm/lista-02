#include <stdio.h>

int main() {
    double salario, prestacao;

    printf("Informe o salario do trabalhador: ");
    scanf("%f", &salario);

    printf("Informe o valor da prestacao do emprestimo: ");
    scanf("%f", &prestacao);

    if (prestacao > 0.2 * salario) {
        printf("Emprestimo nao concedido\n");
    } else {
        printf("Emprestimo concedido\n");
    }

    return 0;
}