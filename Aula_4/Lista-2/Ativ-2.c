#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1, n2, n3;
	
	printf("\nDigite o seu primeiro intervalo:");
	scanf("%i",&n1);
	
	printf("\nDigite o seu segundo intervalo:");
	scanf("%i",&n2);
	
	printf("\nDigite um numero:");
	scanf("%i",&n3);
	
	if(n3 < n1 && n3 > n2){
		printf("\nO seu numero esta dentro do intervalo");
	}
	else if(n3 > n1 && n3 < n2){
		printf("\nO seu numero esta dentro do intervalo");	
	}

	else{
		printf("\nO seu nao numero esta dentro do intervalo ");
	}
	
	
	
	
	return 0;
	
}