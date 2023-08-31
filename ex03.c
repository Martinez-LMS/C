#include <stdio.h>

int main (){
	
	int a, b, soma, sub, mult, divi;
	printf ("Digite o primeiro valor:\n");
	scanf ("%d", &a);
	printf ("Digite o segundo valor:\n");
	scanf ("%d", &b);
	
	soma = a +b;
	sub = a - b;
	mult = a * b;
	divi = a / b;
	
	printf ("Resultados:\n");
	printf ("Soma: %d \n", soma);
	printf ("subtracao: %d \n", sub);
	printf ("multiplicacao: %d \n", mult);
	printf ("divisao: %d \n", divi);
	
	return 0;
}