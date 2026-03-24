//Bibliotecas:
#include <stdio.h>

int main() {	
	int opt = 0;
	
	printf("[1]- Cadastrar");
	printf("\n[2]- Buscar");
	printf("\n[3]- Sair\n");
	
	scanf("%i", &opt);
	
	switch(opt) {
		case 1:
			printf("Cadastrando...");
			break;
		case 2:
			printf("Buscando...");
			break;
		case 3:
			printf("Tchau!!!!");
			break;
		default:
			printf("Opcao invalida");
	}
	
	
	return 0;
}