//Bibliotecas:
#include <stdio.h>
#include <stdlib.h>

int main(){
	int temp = 0;
	
	printf("Digite uma temperatura em Fahrenheit:");
	scanf("%i", &temp);
	
	int celsius = (temp - 32) / 1.8;
	
	printf("\nO valor da sua temperatura em Celsius e %i", celsius);
	
	return 0;
}