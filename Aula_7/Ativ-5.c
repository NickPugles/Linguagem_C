#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetor[12];
	
	for(int i = 0; i < 12; i++){
		printf("Digite o numero: ");
		scanf("%d", &vetor[i]);
	}
	
	for(int i = 0; i < 12; i++){
		if(vetor[i] > 0){
			printf("\nOs numeros positivos sao %d", vetor[i]);	
		}
	}
	
	return 0;
}