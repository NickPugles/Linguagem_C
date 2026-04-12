//Bibliotecas:
#include <stdio.h>
#include <stdlib.h>

int main(){
	int idade, plano;
	
	printf("Qual e a sua idade?");
	scanf("%d", &idade);
	
	if(idade < 0){
		printf("\nIdade invalida");
		return 0;
	}
	
	if(idade >= 0 || idade <= 17){
		plano = 100;
	}
	if(idade >= 18 || idade <= 40){
		plano = 150;
	}
	if(idade >= 41 || idade <= 65){
		plano = 250;
		if(idade > 60){
			plano = 250 + 50;
		}
	}
	if(idade >= 66){
		plano =  400 + 50;
	}
	
	printf("\nSua idade e %i e seu plano e %d", idade, plano);
	return 0;
}