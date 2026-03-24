//Bibliotecas:
#include <stdio.h>
#include <math.h>

int main() {	
	float n1, n2;
	char opt;
	
	printf("\nNum1: ");
	scanf("%f", &n1);
	
	printf("\nNum2: ");
	scanf("%f", &n2);
	fflush(stdin);
	
	printf("\nOperacao [+, -, *, /, ^]: ");
	scanf("%c", &opt);	
	
	switch(opt) {
		case '+':	
			printf("%.2f %c %.2f = %.2f", n1, opt, n2, n1+n2);
			break; 
		case '-':	
			printf("%.2f %c %.2f = %.2f", n1, opt, n2, n1-n2);
			break; 
		case '*':	
			printf("%.2f %c %.2f = %.2f", n1, opt, n2, n1*n2);
			break; 
		case '/':	
			if (n2 != 0) {
				printf("%.2f %c %.2f = %.2f", n1, opt, n2, n1/n2);
			}
			else {
				printf("Divisao por 0");
			}
			break;
		case '^':
			printf("%.2f %c %.2f = %.2f", n1, opt, n2, pow(n1,n2));
			
			break; 
		default:
			printf("operador invalido");
			codigo = -1;
	}
	
		printf();
		
		
	return 0;
}