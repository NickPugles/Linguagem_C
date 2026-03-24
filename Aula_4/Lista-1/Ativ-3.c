#include <stdio.h>
#include <ctype.h>

//tolower (): transforma em minusculo. e touupper(): vai transformar em maiusculo

int main(){
	char letra;
	
	printf("digite uma letra: \n");
	scanf("%c", &letra);
	
	letra = tolower(letra);
	printf("%c", letra);
	
	
	
	
	return 0;
}