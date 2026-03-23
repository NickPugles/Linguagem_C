//Bibliotecas:
#include <stdio.h>
#include <stdlib.h>

int main(){
	float preco;
	
	printf("Digite o preco do produto:\n");
	scanf("%f", &preco);
	
	printf("\nO preco do produto com duas casas decimais e %.2f", preco);
	
	return 0;
}