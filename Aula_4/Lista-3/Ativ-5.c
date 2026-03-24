//Bibliotecas:
#include <stdio.h>
#include <stdlib.h>

int main(){
	int num = 0;
	printf("Digite um numero:");
	scanf("%i", &num);
	
	switch(num){
		case 1:
			printf("\nO dia digitado foi Domingo");
			break;
			
		case 2:
			printf("\nO dia digitado foi Segunda-Feira");
			break;
			
		case 3:
			printf("\nO dia digitado foi Terca-Feira");
			break;
			
		case 4:
			printf("\nO dia digitado foi Quarta-Feira");
			break;
		
		case 5:
			printf("\nO dia digitado foi Quinta-Feira");
			break;
			
		case 6:
			printf("\nO dia digitado foi Sexta-Feira");
			break;
		
		case 7:
			printf("\nO dia digitado foi Sabado");
			break;
			
		default:
			printf("\nDia invalido");
	}
	
	
	return 0;
}