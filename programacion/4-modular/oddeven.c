#include <stdio.h>
#include <stdlib.h>
/**
 * 
 * 		Autor: mario perez
 */
int main(){
	int num;
	printf("ingresa un numero tipo int\n");
	scanf("%d", &num);
	if( num % 2 == 0){
	printf( "el numero es par\n");

	} else {
		printf(" el numero es impar\n");
	}
	
		

	return EXIT_SUCCESS;
}
