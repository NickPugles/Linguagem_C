#include <stdio.h>
#include <string.h>
int main() {
	int codigos[10];
	char nomes[10][50];
	float precos[10];
	int estoque[10][3];
	int quantidade = 0;
	int opcao = 0;
	int i;
	int codigoBusca;
	int encontrado;
	
	do {
		printf("\n===== SISTEMA DE CONTROLE DE ESTOQUE =====\n");
		printf("1 - Cadastrar produtos\n");
		printf("2 - Listar produtos\n");
		printf("3 - Buscar produto pelo codigo\n");
		printf("4 - Alterar quantidade em estoque\n");
		printf("5 - Sair\n");
		printf("Escolha uma opcao: ");
		scanf("%d", &opcao);
		
		switch (opcao) {
			
			case 1:
				if (quantidade < 10) {
					printf("\n--- Cadastro de Produto ---\n");
					printf("Digite o codigo do produto: ");
					scanf("%d", &codigos[quantidade]);
					
					printf("Digite o nome do produto: ");
					
					fflush(stdin);
					
					gets(nomes[quantidade]);
					
					printf("Digite o preco do produto: ");
					scanf("%f", &precos[quantidade]);
					
					printf("Digite a quantidade em estoque: ");
					scanf("%d", &estoque[quantidade][0]);
					
					printf("Digite o corredor do produto: ");
					scanf("%d", &estoque[quantidade][1]);
					
					printf("Digite a prateleira do produto: ");
					scanf("%d", &estoque[quantidade][2]);
					
					quantidade++;
					
					printf("\nProduto cadastrado com sucesso!\n");
				} else {
					printf("\nLimite de produtos atingido.\n");
				}
				break;
			case 2:
				if (quantidade == 0) {
					printf("\nNenhum produto cadastrado.\n");
				
				} else {
					printf("\n--- Lista de Produtos ---\n");
					
					for (i = 0; i < quantidade; i++) {
						printf("\nProduto %d\n", i + 1);
						printf("Codigo: %d\n", codigos[i]);
						printf("Nome: %s\n", nomes[i]);
						printf("Preco: R$ %.2f\n", precos[i]);
						printf("Quantidade: %d\n", estoque[i][0]);
						printf("Corredor: %d\n", estoque[i][1]);
						printf("Prateleira: %d\n", estoque[i][2]);
					}
				}
				break;
				
			case 3:
				printf("\nDigite o codigo do produto: ");
				scanf("%d", &codigoBusca);
				
				encontrado = 0;
				
				for (i = 0; i < quantidade; i++) {
					if (codigos[i] == codigoBusca) {
						printf("\n--- Produto Encontrado ---\n");
						printf("Codigo: %d\n", codigos[i]);
						printf("Nome: %s\n", nomes[i]);
						printf("Preco: R$ %.2f\n", precos[i]);
						printf("Quantidade: %d\n", estoque[i][0]);
						printf("Corredor: %d\n", estoque[i][1]);
						printf("Prateleira: %d\n", estoque[i][2]);
						encontrado = 1;
					}
				}
				
				if (encontrado == 0) {
					printf("\nProduto nao encontrado.\n");
				}
				break;
			case 4:
				printf("\nDigite o codigo do produto: ");
				scanf("%d", &codigoBusca);
				
				encontrado = 0;
				
				for (i = 0; i < quantidade; i++) {
					if (codigos[i] == codigoBusca) {
						printf("\nProduto encontrado: %s\n", nomes[i]);
						printf("Quantidade atual: %d\n", estoque[i][0]);
						printf("Digite a nova quantidade: ");
						scanf("%d", &estoque[i][0]);
						printf("\nQuantidade alterada com sucesso!\n");
						encontrado = 1;
					}
				}
				
				if (encontrado == 0) {
					printf("\nProduto nao encontrado.\n");
				}
				break;
			case 5:
				printf("\nEncerrando o sistema...\n");
				break;
				
			default:
				printf("\nOpcao invalida.\n");
				break;
		}
	} while (opcao != 5);
	
	return 0;
}