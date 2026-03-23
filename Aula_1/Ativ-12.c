//Bibliotecas:
#include <stdio.h>
#include <stdlib.h>

int main(){
	float num;
	
	printf("Digite um numero com casas decimais:");
	scanf("%f", &num);
	
	printf("\nO numero com oito casas decimais e %.8f", num);
	
	return 0;
}