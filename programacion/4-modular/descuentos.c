#include <stdio.h>
#include <stdlib.h>
/**
 * 
 * 		Autor: mario perez
 */
int main(){
	float total_compra;	
	char rol;
	printf("cual es el precio total de la compra?\n");
	scanf("%f", &total_compra);
	printf("cual es tu rol?(e=estudiante, p=profesor u o=otro)\n");
	scanf(" %c", &rol);
	
	float estudiante; 
       	estudiante = total_compra - ( total_compra * 0.15);
	float profesor;
	profesor = total_compra - ( total_compra * 0.10);

	if (rol == 'e'){
	       printf("tu precio es: %f\n", estudiante);

	  }else if (rol == 'p'){
		  printf("tu precio es: %f\n" , profesor);
	} else { 
		printf("tu precio es : %f\n" , total_compra);
	}





	
	
	
	
	
	
	
	
	
	return EXIT_SUCCESS;
}
