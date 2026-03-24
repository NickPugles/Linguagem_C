//Bibliotecas:
#include <stdio.h>
#include <stdlib.h>

int main(){
	int anos;
	printf("Qual e o seu ano de nascimento?\n");
	scanf ("%i", &anos);
	
	int dias = anos * 365;
	printf("Voce tem %i dias de vida", dias);
	
	return 0;
}