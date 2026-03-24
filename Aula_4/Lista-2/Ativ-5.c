//Bibliotecas:
#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1, n2, n3;
	
	printf("Digite seu primeiro numero:");
	scanf("%i", &n1);
	
	printf("\nDigite seu segundo numero:");
	scanf("%i", &n2);
	
	printf("\nDigite seu terceiro numero:");
	scanf("%i", &n3);
	
	if(n1 > n2 && n1 > n3){
		printf("\nO seu maior numero foi %i, o primeiro digitado.", n1);
	}
	else if(n2 > n1 && n2 > n3){
		printf("\nO seu maior numero foi %i, o segundo digitado.", n2);
	}
	else{
		printf("\nO seu maior numero foi %i, o terceiro digitado.", n3);
	}
	
	return 0;
}