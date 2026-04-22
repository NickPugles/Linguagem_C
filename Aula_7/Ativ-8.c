#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetor[10], soma = 0;
	

	
	/*for(int i = 0; i < 10; i++){
		printf("Digite os numeros: ");
		scanf("%d", &vetor[i]);
	
		if(vetor[i] > 0){
			vetor[j] = i;
			j++;
		}
		else{
			return 0;
		}
		
	}
	*/
	
	for (int i = 0; i < 10; i++) {
		do {
			printf("Posicao %d: ", i + 1);
			scanf("%d", &vetor[i]);
			if (vetor[i] < 0) {
				printf("Numero negativo! Tente novamente.\n");
			}
		} while (vetor[i] < 0);
	}
		printf("\nVetor preenchido:\n");
		for (int i = 0; i < 10; i++) {
			printf("%d ", vetor[i]);
		}
		printf("\n\nSoma dos numeros nas posicoes impares:\n");
		for (int i = 0; i < 10; i++) {
			if (i % 2 == 0) { // Posições ímpares
				soma += vetor[i];
			}
		}
		printf("Soma: %d\n", soma);
	
	return 0;
}