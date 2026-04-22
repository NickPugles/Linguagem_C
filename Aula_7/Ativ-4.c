#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetor[15];
	
	for(int i = 0; i < 15; i++){
		printf("Digite o numero: ");
		scanf("%d", &vetor[i]);
	}
	
	for(int i = 0; i < 15; i++){
		printf("\nO dobro de cada numero e %i", vetor[i]*2);
	}
	
	return 0;
}