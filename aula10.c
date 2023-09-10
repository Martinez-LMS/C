#include <stdio.h>

int main (){
	
	int gene;
	float alt;
	
	
	printf ("Digite seu genero 1[M] 2[F]: ");
	scanf("%d", &gene); 
	printf ("Qual sua altura:");
	scanf ("%f", &alt);
	
	
	if (gene == 1){
		
		float gene1 = (72.7 * alt - 58);
		printf ("Voce e homem seu peso ideal e: %.2f", gene1);
	}
	
	else {
		float fem = (62.1 * alt - 44.7);
		printf ("Voce e mulher seu peso ideal e: %.2f", fem );
	}
	return 0;
}

