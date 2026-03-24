//Bibliotecas:
#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1, n2;
	
	printf("Digite o seu primeiro numero:");
	scanf ("%i", &n1);
	
	printf("\nDigite o seu segundo numero:");
	scanf ("%i", &n2);
	int final = (n1 + n2) / 2;
	printf("Sua media e: %i", final);

	return 0;
}