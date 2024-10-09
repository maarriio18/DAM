
	
	
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calcularraiz(){
	int valor;
	double raiz;
	// PARTE DEL CALCULO DE UNA RAIZ CAUDRADA
	printf("Introduzca un número para calcular su raíz\n");
	
	scanf("%d",&valor);
	raiz = sqrt(valor);
	printf("La raiz cuadrada de %d es %lf\n",valor,raiz);
}

	int calculararea(){
		double radio,area;
		printf("introduzca el radio de un circulo para calcular su area\n");
		scanf("%lf",&radio);
		area = radio * radio * M_PI;
		printf("el area del circulo es %lf\n",area);
	}
int main(){
			double raiz,area;
			calcularraiz();
			calculararea();
	return 0;
}
