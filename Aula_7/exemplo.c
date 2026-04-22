#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetor[5] = {4, 7, 3, 9, 11}; //atribuindo valores
	int vetor1[10];
	
	printf("%d", vetor[1]); //mostrar o 2º elemento do 1º vetor, ou seja, elemento 3
	
	//atribuir valor p/ um elemento do vetor
	vetor1[4] = 100; //5º elemento do veotr = 100
	
	vetor[1] = 99;
	
	printf("%d", vetor[1]); //mostrar o 2º elemento do 1º vetor
	
	//usando FOR ==================
	//Ler os elementos de um vetor com FOR
	for(int i = 0; i < 3; i++){
		printf("\n[%d] %d", i, vetor[i]);
		
	}
	
	//atribuir valores a um vetor usando FOR
	for(int i = 0; i < 3; i++){
		printf("\ndigite um numero: ");
		
	}
	
	return 0;
}