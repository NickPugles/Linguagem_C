//Bibliotecas:
#include <stdio.h>
#include <stdlib.h>

int main(){
	int idade;
	
	printf("Informe a sua idade:");
	scanf("%i", &idade);
	
	if(idade < 12){
		printf("\nSua faixa etaria e crianca");
	}
	else if(idade == 13 || idade <= 17){
		printf("\nSua faixa etaria e adolescente");
	}
	else if(idade == 18 || idade <= 59){
		printf("\nSua faixa etaria e adulto");
	}
	else{
		printf("\nSua faixa etaria e idoso");
	}
	
	return 0;
}