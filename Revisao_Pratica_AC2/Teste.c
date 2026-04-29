#include <stdio.h>
#include <stdlib.h>

#define QUANT 3

int main(){
	
	int codigos[QUANT];
	int idades[QUANT];
	float salarios[QUANT];
	char opt = 's';
	int codigo, cod;
	
	printf("### Cadastro de Usuario ###\n");
	
	
	for(int i = 0; i < QUANT; i++){
	
		printf("\n\n[%d]Digite o seu codico:", i + 1);
		scanf("%d", &codigos[i]);
		
		printf("\nDigite a sua idade:");
		scanf("%d", &idades[i]);
		
		printf("\nDigite o seu salario:");
		scanf("%d", &salarios[i]);
		
	}
	//printf("\nOs usuarios cadastrados sao:\n %d", i);
	
	
	while(opt ==  's' || opt == 'S'){
		system("cls");
		printf("\nDigite um codigo: ");
		scanf("%d", &cod);
		fflush(stdin);
		
		for(int i = 0; i < QUANT; i++){
			if (codigos[i] == cod) {
				codigo = 1;
				printf("\nCodigo: %d", codigos[i]);
				printf("\nIdade: %d", idades[i]);
				printf("\nSalario: %.2f", salarios[i]);
			}
		}
		
		if (codigo == 0) {
			printf("\n## Codigo nao cadastrado ##");
		}
	}
		codigo = 0;
		
		printf("\nContinuar (s/n)?");
		scanf("%c", &opt);
	
	

	return 0;	
}