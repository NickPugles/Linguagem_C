//Bibliotecas:
#include <stdio.h>
#include <stdlib.h>

int main(){
	float n1, n2, n3;
	float p1, p2, p3;
	
	printf("Digite as suas notas:");
	scanf("%f %f %f", &n1, &n2, &n3);
	
	printf("\nDigite os pesos de cada nota:");
	scanf("%f %f %f", &p1, &p2, &p3);
	
	
	float media = (n1*p1 + n2*p2 + n3*p3) / (p1 + p2 + p3);
	
	if(media >= 7){
		printf("\nO aluno esta Aprovado. Sua media foi %.2f", media);
	}
	else if(media >= 5 && media < 7){
		printf("\nO aluno esta de Recuperacao.Sua media foi %.2f", media);
	}
	else if(media < 5){
		printf("\nO aluno esta Reprovado. Sua media foi %.2f", media);
	}
	return 0;
}