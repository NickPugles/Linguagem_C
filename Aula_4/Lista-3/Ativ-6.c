//Bibliotecas:
#include <stdio.h>
#include <stdlib.h>

int main(){
	int maca = 0;
	float preco = 0;
	
	printf("Digite a quantidade desejada de macas:");
	scanf("%i", &maca);
	
	if (maca < 12){
		preco = maca * 1.30;
		printf("\nO valor total a pagar e %.2f", preco);
	}
	else if(maca >= 12){
		preco = maca * 1.00;
		printf("\nO valor total a pagar e %.2f", preco);
	}
	
	return 0;
}