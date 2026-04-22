#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int vetor[50], j;
	
	for(int i = 0; i <= 100; i++){
		if (i % 2 == 0) {
			vetor[j] = i;
			j++;
		}		
	}
	
	for (int i = 0; i < j; i++) {
		printf("%d\n", vetor[i]);
	}
	
	return 0;
}