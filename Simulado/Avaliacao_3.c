//Bibliotecas:
#include <stdio.h>
#include <stdlib.h>

int main(){
	float valor, final;
	int opcao;
	
	printf("qual e o valor a ser pago?");
	scanf("%f", &valor);
	
	printf("\nMenu de formas de pagamento:\n 1- Dinheiro (10 desconto)\n 2- Cartao a vista (5 desconto)\n 3- Cartao parcelado (sem desconto)\n");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			final = valor * 0.10;
			break;
			
		case 2:
			final = valor * 0.50;
			break;
			
		case 3:
			final = valor;
			break;
		
		default:
			printf("\nOpcao invalida");
	}
	
	if(valor > 100){
		printf("\nSua compra esta alta!");
	}
	
	printf("\nO valor final da sua compra e %.2f", final);
	
	return 0;
}