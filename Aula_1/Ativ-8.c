//Bibliotecas:
#include <stdio.h>
#include <stdlib.h>

int main(){
	char nome;
	
	printf("Qual e a letra inicial do seu nome?\n");
	scanf("%c", &nome);
	
	printf("A letra inicial do seu nome e %c", nome);
	
	return 0;
}