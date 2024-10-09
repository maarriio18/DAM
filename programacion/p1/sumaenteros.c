#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero1;
		printf("escribe un numero");
		scanf( "%d", &numero1);

	int numero2;
		printf("escribe el segundo numero");
		scanf( "%d", &numero2);

	int resultado_suma;
	int resultado_resta;

	resultado_suma = numero1 + numero2;
	resultado_resta = numero1 - numero2;

	printf("la suma es : = %d\n",resultado_suma);
	printf("la resta es : = %d\n",resultado_resta);

	int resultado_multiplicacion;
	int resultado_division;

	resultado_multiplicacion = numero1 * numero2;
	resultado_division = numero1 / numero2;

	printf("la multiplicacion es : = %d\n",resultado_multiplicacion);
	printf("la division es : = %d\n", resultado_division);
	
	return 0; 
	}

		
