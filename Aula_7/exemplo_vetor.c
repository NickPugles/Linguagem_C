#include <stdio.h>

int main() {
	
	// declarar vetor
	int vetor[5] = {4,7,3,9,11}; // atriundo valores
	int vetor1[10];
	
	// Pegar elemento do vetor
	printf("\n%d", vetor[1]); // mostrar 2 elemento do vetor
	
	// atribuir valor para um elemento do veto
	vetor1[4] = 100; // 5º elemento do vetor = 100
	vetor[1] = 99;
	printf("\n%d\n", vetor[1]); // mostrar 2 elemento do vetor
	
	// USANDO FOR ============================
	// LER OS ELEMENTOS DE UM VETOR COM FOR
	for (int i = 0; i < 3; i++) {
		printf("\n[%d] %d ",i, vetor[i]);
	}
	
	// ATRUBUIR VALORES A UM VETOR USANDO FOR
	for (int i = 0; i < 3; i++) {
		printf("\nDigite um numero: ");
		scanf("%d", &vetor[i]);
	}
	
	return 0;
}
