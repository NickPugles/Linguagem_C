#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1, n2, n3 = 0;
	
	printf("Digite seu primeiro numero:\n");
	scanf("%i", &n1);
	
	printf("Digite seu segundo numero:\n");
	scanf("%i", &n2);
	
	printf("Digite seu terceiro numero:\n");
	scanf("%i", &n3);
	
	if(n1 != n2 && n1 != n3 && n2 != n3){
		printf("Nenhum dos seus numeros esta repetindo.\n");
	}
	else if(n1 == n2 && n1 != n3){ //n1 == n2 || n1 == n3 || n2 == n3 
		printf("O primeiro numero: %i e o segundo: %i sao iguais.\n", n1, n2);
	}
	else if(n1 == n3 && n1 != n2 ){
		printf("O primeiro numero: %i e o terceiro: %i sao iguais.\n", n1, n3);
	}
	else if(n3 == n2 && n3 != n1){
		printf("O segundo numero: %i e o terceiro: %i sao iguais.\n", n2, n3);
	}
	else if(n1 == n2 && n1 == n3 && n2 == n3 ){
		printf("Todos os numeros sao iguais");
	}
	
	return 0;
}