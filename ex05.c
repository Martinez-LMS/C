#include <stdio.h>

int main() {
    int menu;
    float cel, fare;

    printf("Qual opcao de temperatura deseja?\n[1] Celsius\n[2] FAHRENHEIT\n");
    scanf("%d", &menu);

    switch (menu) {
        case 1:
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &cel);
            fare = (cel * 9 / 5) + 32;
            printf("A temperatura em Fahrenheit é: %.2f\n", fare);
            break;

        case 2:
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &fare);
            cel = (fare - 32) * 5 / 9;
            printf("A temperatura em Celsius é: %.2f\n", cel);
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}

