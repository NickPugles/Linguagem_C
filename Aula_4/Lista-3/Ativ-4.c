//Bibliotecas:
#include <stdio.h>
#include <stdlib.h>

int main(){
	int num = 0;
	
	printf("Digite um numero:");
	scanf("%i", &num);
	
	if(num / 3 == 0 && num / 5 == 0){
		printf("\nO numero digitado e multiplo de 3 e de 5");
	}
	else if(num / 3 == 0){
		printf("\nO numero digitado e multiplo de 3");
	}
	else if(num / 5 == 0){
		printf("\nO numero digitado e multiplo de 5");
	}
	
	return 0;
}