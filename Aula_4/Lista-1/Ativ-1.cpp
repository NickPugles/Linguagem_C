#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	char nome;
	
	printf("Digite um mes em numero:");
	scanf("%i", & num);
	
	switch(num){
		case 1:
			printf("\nO mes escolhido foi janeiro");
			break;
		case 2:
			printf("\nO mes escolhido foi fevereiro");
			break;
		case 3:
			printf("\nO mes escolhido foi marco");
			break;
		case 4:
			printf("\nO mes escolhido foi abril");
			break;
		case 5:
			printf("\nO mes escolhido foi maio");
			break;
		case 6:
			printf("\nO mes escolhido foi junho");
			break;
		case 7:
			printf("\nO mes escolhido foi julho");
			break;
		case 8:
			printf("\nO mes escolhido foi agosto");
			break;
		case 9:
			printf("\nO mes escolhido foi setembro");
			break;
		case 10:
			printf("\nO mes escolhido foi outubro");
			break;
		case 11:
			printf("\nO mes escolhido foi novembro");
			break;
		case 12:
			printf("\nO mes escolhido foi dezembro");
			break;
		default:
			printf("\Numero invalido");
	}
	
	
	
	
	
	return 0;
}