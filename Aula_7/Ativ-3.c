#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetor[8], posicao;
	
	for(int i = 0; i < 8; i++){
		printf("digite um numero: ");
		scanf("%d", &vetor[i]);
	}
	
	printf("digite a posicao desejada: ");
	scanf("%d", &posicao);
	
	while (posicao < 0 || posicao > 7) {
		printf("Posicao invalida! Digite novamente (0 a 7): ");
		scanf("%d", &posicao);
	}
	
	printf("\nO numero na posicao %d e: %d\n", posicao, vetor[posicao]);
	
	return 0;
}