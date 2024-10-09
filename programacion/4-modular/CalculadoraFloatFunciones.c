#include <stdio.h>
#include <stdlib.h>

int calcular_suma(float numero1, float numero2) {
	float resultado_suma;
	resultado_suma = numero1 + numero2;
	printf("suma: %f\n", resultado_suma);
	return 0;
}
int calcular_resta(float numero1, float numero2) {
	float resultado_resta;
	resultado_resta= numero1 - numero2;
	printf("resta: %f\n" , resultado_resta);
	return 0;
}

int calcular_multiplicacion(float numero1,float numero2) {
	
	float resultado_multiplicacion;
	resultado_multiplicacion= numero1 * numero2;
	printf("multiplicacion: %f\n" , resultado_multiplicacion);
	return 0;
}

int calcular_division(float numero1, float numero2) {
	float resultado_division;		
	resultado_division= numero1 / numero2;		
	printf("division: %f\n" , resultado_division);
	return 0;
}
int main(){
	char operaciones;
	float numero1;
		printf("escribe el numero:\n");
	scanf("%f", &numero1);

	float numero2;
		printf("escribe el segundo numero:\n");
	scanf("%f", &numero2);
	printf(" si desea realizar suma pulse s, si desea realizar resta pulse r, si desea multiplicacion pulse m, si desea division pulse d\n");
	scanf(" %c", &operaciones);

	if (operaciones == 's'){
	calcular_suma(numero1, numero2);
	} else if(operaciones == 'r'){
	calcular_resta(numero1, numero2);
	} else if(operaciones == 'm'){
	calcular_multiplicacion(numero1, numero2);
	} else if(operaciones == 'd'){
	calcular_division(numero1, numero2);
	} else{
		printf("selecione una de las letras solicitadas\n"); 
	}
	return 0;
}

