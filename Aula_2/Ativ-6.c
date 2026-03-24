//Bibliotecas:
#include <stdio.h>
#include <stdlib.h>

int main(){
	float alt, base;
	
	printf("Digite a altura do triangulo:");
	scanf("%f", &alt);
	fflush(stdin);
	
	printf("\nDigite a base do triangulo:");
	scanf("%f", &base);
	
	float area = (alt * base) / 2;
	
	printf("\nA area do triangulo e %.1f", area);
	
	return 0;
}