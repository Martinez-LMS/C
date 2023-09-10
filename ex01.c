#include <stdio.h>

int main() {
    int n;
    int par;

    printf("Digite um numero para saber se ele e PAR ou IMPAR: ");
    scanf("%d", &n);

    par = (n % 2); // Use o operador % para verificar se é par

    if (par == 0) {
        printf("Seu numero e PAR!\n");
    } else {
        printf("Seu numero e IMPAR\n");
    }

    return 0;
}

