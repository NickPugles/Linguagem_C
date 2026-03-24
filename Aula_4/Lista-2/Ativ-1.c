#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	
	printf("\nDigite um numero:");
	scanf("\n%i", &num);
	
	if(num > 0){
		printf("\nO numero e positivo");
	}
	else if(num < 0){
		printf("\nO numero e negativo");
	}
	else if(num == 0){
		printf("\nO numero e nulo");
	}
	
	return 0;
}