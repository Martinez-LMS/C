#include <stdio.h>

int main () {
    int n;
	
	printf ("Digite um valor de 1 a 7\n");
	scanf ("%d", &n);
	
	switch (n){
		case 1:
			printf ("Segunda");
			break;
		case 2: 
			 printf ("terca");
			 break;
 		 case 3:
 		 	printf ("Quarta");
 		 	break;
		case 4:
			printf("Quinta");
			break;
		case 5:
			printf ("Sexta");
			break;
		case 6:
			printf ("Sabado");
			break;
		case 7:
			printf ("Domingo");
			break;
		default:
			printf ("Valor invalido tente novamente !");
	}

	return 0;
}
