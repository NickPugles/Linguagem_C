//Bibliotecas:
#include <stdio.h>
#include <stdlib.h>

int main(){
	int op, quan;
	float preco, total;
		
	printf("Bem-vindo a lanchonete!\n");
	printf("Opcoes do cardapio:\n1- Hamburguer R$10.\n2- Pizza R$15.\n3- Refrigerante R$5.\n");
	scanf("\n%i", &op);
	
	switch(op){
		case 1:  
			preco = 10.0;
			break;
			
		case 2: 
			preco = 15.00;
			break;
			
		case 3:
			preco = 5.00;
			break;
			
		default:
			printf("\nOpcao invalida");
			return 0;
		
	} 
	printf("\nQual e a quantidade desejada?\n");
	scanf("%d", &quan);
	
	if(quan <= 0){
		printf("quantidade nao selecionada!");
		return 0;
	}
	
	total = preco * quan;
	
	if (total > 30) {
		total = total * 0.9;
		printf("Desconto aplicado!\n");
	}
	// Resultado final
	printf("Total a pagar: R$%.2f\n", total);
	return 0;
}