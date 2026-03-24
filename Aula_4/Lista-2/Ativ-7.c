//Bibliotecas:
#include <stdio.h>
#include <stdlib.h>

int main(){
	float n1, n2, n3;
	
	printf("Digite as medidas dos triangulos:\n");
	scanf("%i %i %i", &n1, &n2, &n3);
	
	if(n1 == n2 && n1 == n3 && n3 ==n2){
		printf("\nTodas as suas medidas sao iguais, portanto, seu triangulo e equilatero");
	}
	else if(n1 == n2 || n1 == n3 || n2 == n3){
		printf("\nDuas das suas medidas sao iguais, portanto, seu triangulo e isosceles");	
	}
	else if(n1 != n2 && n1 != n3 && n2 != n3){
		printf("\nTodas as suas medidas sao diferentes, portanto, seu triangulo e escaleno");
	}
	
	return 0;
}