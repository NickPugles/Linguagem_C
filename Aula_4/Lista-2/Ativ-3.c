#include <stdio.h>
#include <stdlib.h>

int main(){
	float peso = 0;
	float alt = 0;
	
	printf("Informe o seu peso  em kg:\n");
	scanf("%f", &peso);
	
	printf("Informe a sua altura:\n");
	scanf("%f", &alt);
	
	float massa = peso / alt;
	
	printf("\nSua massa e %.2f\n", massa);
	
	if(massa > 18.5 && massa < 25.0){
		printf("\nVoce esta Saudavel");
	}
	else if(massa > 25.0 && massa < 30.0){
		printf("\nVoce esta no Sobrepeso");
	}
	else if(massa > 30.0 && massa < 35.0){
		printf("\nVoce esta na Obesidade Grau I");
	}
	else if(massa > 35.0 && massa < 40.0){
		printf("\nVoce esta na Obesidade Grau II (severa)");
	}
	else if(massa > 40.0){
		printf("\nVoce esta na Obesidade Grau III (morbida)");
	}
	
	
	
	return 0;
}