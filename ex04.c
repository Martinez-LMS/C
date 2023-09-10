#include <stdio.h>

int main(){
	
	char vogal;
	
	printf ("Digite uma letra para ver se ela e VOGAL ou CONSOANTE: ");
	scanf ("%c", &vogal);
	
	if (vogal == 'a' || vogal == 'e' || vogal == 'i' || vogal == 'o' || vogal == 'u' ||
	    vogal == 'A' || vogal == 'E' || vogal == 'I' || vogal == 'O' || vogal == 'U'){
    	printf ("A letra escolhida %c e uma VOGAL", vogal);
		} else {
			printf ("A letra escolhida e uma CONSOANTE");
		}
	
	return 0;
}
