#include <stdio.h>

int main(){
	
	int n1, n2;
	
	printf ("Digite o primeiro numero: \n");
	scanf ("%d", &n1);
	printf ("Digite o segundo numero: \n");
	scanf ("%d", &n2);
	
	if (n1 > n2){
		printf ("O %d que digitou e o maior numero.", n1);
	}	else {
		printf ("O %d que digitou e o maior numero", n2);
	}
	
	
}
