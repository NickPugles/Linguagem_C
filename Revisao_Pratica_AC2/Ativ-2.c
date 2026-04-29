/*Exercício 2 – Controle de Estoque Simples

Crie um sistema que gerencie o estoque de até 10 produtos.

### Dados:

* Código do produto
* Quantidade em estoque

### Menu:

1 - Cadastrar produto
2 - Listar produtos
3 - Atualizar quantidade
4 - Buscar produto por código
5 - Sair

### Regras:

* Não permitir códigos duplicados.
* Permitir atualizar quantidade somando ou subtraindo.*/
/*#include <stdio.h>
#include <stdlib.h>

#define prod 3

int main(){
	int produtos[prod];
	int codigo, quant;
	int opt;
	
	printf("### Gerenciador de Estoque ###\n");
	
	printf("\nMenu:\n1-Cadastrar produto\n2-Listar produtos\n3-Atualizar quantidade\n4-Buscar produto por código\n5-Sair\nA opcao desejada e: ");
	scanf("%d", &opt);
	
	switch(opt){
		case 1:
			printf("\nDigite o codigo do produto que voce deseja cadastrar: ");
			scanf("%d", &codigo);
			break;
			
		case 2:
			printf("\nListe os codigos dos produtos desejados: ");
			scanf("%d", codigo);
			break;
			
		case 3:
			printf("")
			
	}
	
	
	for(int i = 0; i < prod; i++){
		printf("\nDigite o codigo do produto: ");
		scanf("%d", &codigo);
		
		printf("\nDigite a quantidade do produto: ");
		scanf("%d", &quant);
		
	}
	
	return 0;
}*/

#include <stdio.h>
#include <stdlib.h>

#define prod 3

int main(){
	int produtos[prod];
	int codigo, quant;
	int opt;
	
	printf("### Gerenciador de Estoque ###\n");
	
	printf("\nMenu:\n1-Cadastrar produto\n2-Listar produtos\n3-Atualizar quantidade\n4-Buscar produto por código\n5-Sair\nA opcao desejada e: ");
	scanf("%d", &opt);

        switch(opt) {

            case 1: {
                if (total >= prod) {
                    printf("Estoque cheio!\n");
                    break;
                }

                int codigo, existe = 0;
                printf("Digite o codigo do produto: ");
                scanf("%d", &codigo);

                for (int i = 0; i < total; i++) {
                    if (estoque[i].codigo == codigo) {
                        existe = 1;
                        break;
                    }
                }

                if (existe) {
                    printf("Codigo ja cadastrado!\n");
                } else {
                    estoque[total].codigo = codigo;
                    printf("Digite a quantidade: ");
                    scanf("%d", &estoque[total].quantidade);
                    total++;
                    printf("Produto cadastrado!\n");
                }
                break;
            }

            case 2: {
                if (total == 0) {
                    printf("Nenhum produto cadastrado.\n");
                } else {
                    printf("\nLista de produtos:\n");
                    for (int i = 0; i < total; i++) {
                        printf("Codigo: %d | Quantidade: %d\n",
                               estoque[i].codigo,
                               estoque[i].quantidade);
                    }
                }
                break;
            }

            case 3: {
                int codigo, valor, encontrado = -1;

                printf("Digite o codigo do produto: ");
                scanf("%d", &codigo);

                for (int i = 0; i < total; i++) {
                    if (estoque[i].codigo == codigo) {
                        encontrado = i;
                        break;
                    }
                }

                if (encontrado == -1) {
                    printf("Produto nao encontrado.\n");
                } else {
                    printf("Digite o valor (+ para entrada / - para saida): ");
                    scanf("%d", &valor);

                    estoque[encontrado].quantidade += valor;

                    if (estoque[encontrado].quantidade < 0) {
                        estoque[encontrado].quantidade = 0;
                    }

                    printf("Quantidade atualizada! Novo estoque: %d\n",
                           estoque[encontrado].quantidade);
                }
                break;
            }

            case 4: {
                int codigo, encontrado = 0;

                printf("Digite o codigo do produto: ");
                scanf("%d", &codigo);

                for (int i = 0; i < total; i++) {
                    if (estoque[i].codigo == codigo) {
                        printf("Produto encontrado!\n");
                        printf("Codigo: %d | Quantidade: %d\n",
                               estoque[i].codigo,
                               estoque[i].quantidade);
                        encontrado = 1;
                        break;
                    }
                }

                if (!encontrado) {
                    printf("Produto nao encontrado.\n");
                }
                break;
            }

            case 5:
                printf("Encerrando...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 5);

    return 0;
}