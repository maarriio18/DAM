#include <stdio.h>
#include <stdlib.h>
/**
 * 
 * 		Autor: mario perez
 */
int main(){
	int edad;
	printf("cuantos años tienenes? \n");
	scanf("%d", &edad);
	if (edad < 12){
	printf("eres un niño");
	} else if(edad >= 12 && edad <=17){
	       
		printf("eres un adolescente\n");
	} else if (edad >=18 && edad <=64){
		printf("eres un adulto\n");

	} else { 
		printf("eres mayor\n");

	}
	return EXIT_SUCCESS;
}
