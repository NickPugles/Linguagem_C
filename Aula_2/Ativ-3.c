//Bibliotecas:
#include <stdio.h>
#include <stdlib.h>

int main(){
	int comp;
	printf("Digite o comprimento em metros:");
	scanf ("%i", &comp);
	
	int cent = comp * 100;
	printf("\nSeu comprimento em centimetros e: %i", cent);
	
	return 0;
}