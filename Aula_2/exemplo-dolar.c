//Bibliotecas:
#include <stdio.h>
#include <stdlib.h>

int main() {
	
	// Declarações das variaveis
	float valorProduto, dolar, valorDolar;
	
	// Entrada do usuário
	printf("\nValor produto em reais: ");
	scanf("%f", &valorProduto);
	
	printf("\nValor do dolar atual: ");
	scanf("%f", &dolar);
	
	// Processamento
	valorDolar = valorProduto/dolar;
	
	// Saida para o Usuario
	printf("R$ %.2f em dolar e igual U$ %.2f\n\n", valorProduto, valorDolar);
	
	return 0;
}