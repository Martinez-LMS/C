#include <stdio.h>

int main (){
	
	int n1, n2;
	
	
	printf("Digite o primeiro numero: ");
	scanf ("%d", &n1);
	
	printf ("Digite o segundo numero: ");
	scanf ("%d", &n2);
	
	
	if (n1 > n2){
		printf ("Este numero vem por primeiro %d", n1);
		printf ("O segundo numero e: %d", n2);
	}
	else if (n2 > n1){
		printf ("Este e o maior numero %d", n2);
		printf ("Este e o segundo numero %d", n1);
		
	}
	else{
		printf("Os dois numeros sao iguais %d", n1);
	}	
	
}
