#include <stdio.h>
#include <stdlib.h>

#define quant 10

int main(){
	int opt = 0;
	
	int codigos[quant];
	int idades[quant];
	int salarios[quant];
	int i, cod;
	
	do{
		printf("\n### Sistema de Cadastro de Pessoas ###");
	
		printf("\n\nMenu:\n");
		printf("1-Cadastrar pessoas\n");
		printf("2-Listar todas as pessoas\n");
		printf("3-Buscar pessoa pelo codigo\n");
		printf("4-Sair\n");
		printf("\nEscolha uma opcao: ");
		scanf("%d", &opt);
		
		
		switch(opt){
			case 1:
				printf("\n1-Cadastrar pessoas: ");
				
				for(i = 0; i < quant; i++){
					printf("\n\n%d. Usuario:\n", i + 1);
					
					printf("\nDigite o codigo da %d pessoa: ", i + 1);
					scanf("%d", &codigos[i]);
					
					printf("\nDigite a idade da %d pessoa: ", i + 1);
					scanf("%d", &idades[i]);
					
					printf("\nDigite o salario da %d pessoa: ", i + 1);
					scanf("%d", &salarios[i]);
			
				}
				break;
				
			case 2:
				printf("\n2-Listar todas as pessoas:\n");
				
				for (i = 0; i < quant; i++) {
	                printf("Codigo: %d\n | Idade: %d\n | Salario %d\n",
	               	codigos[i],
	               	idades[i],
	               	salarios[i]);
	    		}
				break;	
				
			case 3:
				printf("\n3-Buscar pessoa pelo codigo:");
				printf("\nDigite o codigo desejado: ");
				scanf("%d", &cod);
				
				int achado = 0;
				
				for(i = 0; i < quant; i++){
					if(codigos[i] == cod){
						printf("\nCodigo: %d\n\ | Idade: %d\n | Salario: %d\n",
	                   codigos[i], idades[i], salarios[i]);	
	                   
	                   achado = 1;
					}
					else if(codigos[i] != cod){
						printf("\nPessoa nao encontrada!");
					}
				}
				break;
				
			case 4:
				printf("\nEncerrando...");
				break;
				
			default:
				printf("\nOpcao invalida");
				
		}
			
	} while(opt != 4);
	
	return 0;
}