#include <stdio.h>

int main() {
    int d;
    
    printf("Insira um valor de 1 a 3:\n");
    scanf("%d", &d);
    
    switch (d) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda\n");
            break;
        case 3:
            printf("Terça\n");
            break;
        default:
            printf("Valor invalido\n");
            break;
    }
    
    return 0;
}
