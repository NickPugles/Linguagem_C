#include <stdio.h>
#include <stdlib.h>

int main(){
	int nu = 0;
	
	printf("1) 200");
	printf("\n2) 400");
	printf("\n3) 500");
	printf("\n4) 503");
	
	printf("\nDigite um numero: \n");
	scanf("\n%i", &nu);
	
	switch(nu){
		case 200:
			printf("\nOK");
			break;
		case 400:
			printf("\nPagina nao encontrada");
			break;
		case 500:
			printf("\nErro interno no servidor");
			break;
		case 503:
			printf("\nServico indisponivel");
			break;
		default:
			printf("\nErro: opcao invalida");
		
	}
	
	
	return 0;
}