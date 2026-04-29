/*Exercício 1 – Controle de Notas de Alunos

Crie um programa que armazene as notas de até 10 alunos.

### Menu:

1 - Cadastrar notas
2 - Listar notas
3 - Calcular média da turma
4 - Mostrar alunos acima da média
5 - Sair

### Regras:

* Use um vetor para armazenar as notas.
* Calcule a média apenas com alunos cadastrados.
* Mostre quais alunos têm nota maior que a média.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	//int alunos[10];
	float notas[10][3];
	char opt = 's', nome[100];
	
	
	printf("### Programa de Armazenamento de Notas ###\n");
	
	for(int i = 0; i < 10; i++){
		printf("\n\n%d Aluno: ", i + 1);
		
		printf("\nDigite o seu nome completo: ");
		scanf("%[^\n]", &nome);
		
		printf("\nDigite a sua primeira nota: ");
		scanf("%f", &notas[i]);
		
		printf("\nDigite a sua segunda nota: ");
		scanf("%f", &notas[i]);
		
		printf("\nDigite a sua terceira nota: ");
		scanf("%f", &notas[i]);
		
		float soma = 0;
		
		for(int j = 0; j < 3; j++){ //3 pq são 3 notas
			soma = soma + notas[i][j];
		}
		
		float media = soma / 3;
		
		printf("\nSua media foi: %.2f", media);
	}
	
	while(opt == 's' || opt == 'S'){
		printf("\nDigite um nome: ");
		scanf("%c", &nome);
	}
	
	
	//float media = alunos
	
	return 0;
}