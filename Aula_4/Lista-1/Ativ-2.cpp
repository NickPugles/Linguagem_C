#include <stdio.h>
#include <stdlib.h>

int main(){
	char letra;
	
	printf("Digite uma letra: \n");
	scanf("%c", &letra);
	
	switch(letra){
		case 'a':
			printf("\nsua letra e uma vogal");
			break;
		case 'e':
			printf("\nsua letra e uma vogal");
			break;
		case 'i':
			printf("\nsua letra e uma vogal");
			break;
		case 'o':
			printf("\nsua letra e uma vogal");
			break;
		case 'u':
			printf("\nsua letra e uma vogal");
			break;
		default:
			printf("\nsua letra e uma consoante");
	}
	
	
	return 0;
}