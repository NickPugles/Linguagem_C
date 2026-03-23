//Bibliotecas:
#include <stdio.h>
#include <stdlib.h>

int main(){
	char genero;
	
	printf("Qual e o seu genero?\n 1. M - masculino \n 2. F - feminino\n");
	scanf("%c", &genero);
	
	printf("\nSeu genro e %c", genero);
	
	
	return 0;
}