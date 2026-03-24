//Bibliotecas:
#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1, n2;
	
	printf("Digite o seu primeiro numero: \n");
	scanf("%i", &n1);
	
	printf("Digite o seu segundo numero: \n");
	scanf("%i", &n2);
	
	int div = n1 / n2;
	int res = n1 %n2;
	
	printf("O resultado da divisao e %i\n", div);
	printf("\No resto e %i", res);
	
	return 0;
}