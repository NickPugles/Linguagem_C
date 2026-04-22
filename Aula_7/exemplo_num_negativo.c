#include <stdio.h>
#define NUM_ALUNOS 10

int main() {
	int numeros[3];
	int negativos[3];
	int count = 0;
	
	for (int i = 0; i < 3; i++) {
		printf("Digite um numero[%d]", i);
		scanf("%d", &numeros[i]);
		if (numeros[i] < 0) {
			negativos[count] = numeros[i];
			count++;
		}
	}
	
	for (int i = 0; i < count; i++) {
		printf("\nNumeros negativos: %d", negativos[i-1]);
	}
	
	return 0;
}