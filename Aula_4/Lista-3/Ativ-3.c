//Bibliotecas:
#include <stdio.h>
#include <stdlib.h>

int main(){
	float valor, desconto, vf = 0;
	
	printf("Digite um valor:");
	scanf("%f", &valor);
	
	if(valor <= 100.00){
		desconto = valor * 0.05;
		vf = valor - desconto;
		printf("\nO valor final com o desconto aplicado e %.2f", vf);
	}
	else if( valor == 100.01 || valor <= 500.00){
		desconto = valor * 0.10;
		vf = valor - desconto;
		printf("\nO valor final com o desconto aplicado e %.2f", vf);	
	}
	else if(valor > 500.00){
		desconto = valor * 0.15;
		vf = valor - desconto;
		printf("\nO valor final com o desconto aplicado e %.2f", vf);
	}
	
	return 0;
}