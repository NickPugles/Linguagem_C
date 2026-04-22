#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetor[10];
	
	for(int i = 0; i < 10; i++){
		printf("Digite o numero: ");
		scanf("%d", &vetor[i]);
	}
	
	for(int i = 0; i < 10; i++){
		printf("\nOs numeros digitados foram: %d", vetor[i]);	
	}
	
	
	return 0;
}