//Bibliotecas:
#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1, n2, res;
	char op;
	
	printf("Digite sua primeiro numero:");
	scanf("%i", &n1);
	fflush(stdin);
	
	printf("\nDigite qual das opcoes voce quer realizar:\n 1) '+' Para adicao\n 2) '-' Para subtracao\n 3) '*' Para multiplicacao\n 4) '/' Para divisao\n");
	scanf("\n\t%c", &op);
	fflush(stdin);
	
	printf("\nDigite seu segundo numero:");
	scanf("%i", &n2);
	fflush(stdin);
	
	switch(op){
		case '+': 
			res = n1 + n2;
			printf("\nO resultado final da opercao e %i", res);
			break;
			
		case '-':
			res = n1 - n2;
			printf("\nO resultado final da opercao e %i", res);
			break;
			
		case '*':
			res = n1 * n2;
			printf("\nO resultado final da opercao e %i", res);
			break;
		case '/': 
			if (n2 != 0){
				res = n1 / n2;
				printf("\nO resultado final da opercao e %i", res);
			}
			else{
				printf("\nEssa operacao nao pode ser realizada!");
			}
			break;
		
		default:
			printf("\nOpcao invalida");
	}
	
	return 0;
}