#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	system("cls");
	
	int numero;
	
	printf("escolha um numero\n");
	scanf("%i", &numero);
	
	numero = numero + 2;
	numero += 2;
	
	printf("n\o numero mais 2 e igual a %i", numero);
	
	printf("\n\n");
	
	return 0;
}
