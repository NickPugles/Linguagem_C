//Bibliotecas:
#include <stdio.h>
#include <stdlib.h>

int main(){
	int idade;
 	char genero;
 	
	printf ("Idade:"); //pergunta 
	scanf ("%i" , &idade); //resposta/recebe
	fflush(stdin);
	
	printf ("\nGenero:");
	scanf ("%c", &genero);
	printf("\n\nIdade: %i", idade);
	printf("\n\nGenero: %c", genero);
	printf("\n\n\n\n\n");
		
	return 0;
}

//STDIN É ENTRADA
//para envitar q o segundo scanf passar direto usa fflush p/ esvaziar a informação