#include <stdio.h>

int main (){
	
	float  n1, n2, media;
	
	printf ("Digite o valor da primeira nota:\n");
	scanf ("%f", &n1);
	
	printf ("Digite o valor da segunda nota: \n");
	scanf ("%f", &n2);
	media = (n1 + n2) / 2;
	
	if (media >= 6){

	printf ("Aprovado");
	
	}else {
	
	printf ("Reprovado");
}
return 0;
}
