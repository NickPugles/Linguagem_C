#include <stdio.h>
#include <stdlib.h>
int main() {
	int idade;
	char genero;
	
	printf("Idade: ");
	scanf("%i", &idade);
	
	fflush(stdin); // <- NOVO
	
	printf("Genero: ");
	scanf("%c", &genero);
	
	printf("\n\nIdade: %i", idade);
	
	printf("\nGenero: %c",genero);
	
	printf("\n\n\n\n\n");
	
	return 0;
}