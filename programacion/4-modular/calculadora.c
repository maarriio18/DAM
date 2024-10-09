#include <stdio.h>
#include <stdlib.h>
/**
 * 
 * 		Autor: mario perez
 */
int main(){

	int num1, num2, resultado;
	char operador;
	
	printf("Introduce un numero:\n");
	scanf("%d", &num1);


	printf("Introduce otro numero:\n");
	scanf("%d", &num2);
	
	printf("Selecciona un operador:\n");
	scanf(" %c", &operador);

	switch(operador){
		case'+':
		resultado = num1 + num2;
		printf("el resultado es:%d\n ", resultado);
			
		break;
		case'-':
			 resultado = num1 - num2;
			printf("el resultado es:%d\n" , resultado);

		break; 
		case '*':
			 resultado = num1 * num2;
			printf("el resultado es:%d\n", resultado); 

		break; 
		case'/':
			 resultado = num1 / num2;
			printf("el resultado es:%d\n" , resultado);
		break;

		default:
			printf("operador no valido\n");

	}
	return EXIT_SUCCESS;
}
