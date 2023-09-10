#include <stdio.h>

int main () {
    int n;
    float resto;

    printf("Digite um numero: ");
    scanf("%d", &n);
    
    resto = n%2;

    if (resto == 0) {  
        printf("Seu numero e PAR\n");
    }
	else{
		printf("Seu numero e IMPAR \n");
	}
	
	printf("O resto e: %.2f", resto);
    return 0;
}

