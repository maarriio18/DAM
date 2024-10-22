#include<stdio.h>
#include<stdlib.h>
int main(){
	char str[50];
	int num;
	char cambio;

	printf("intoduzca la palabra:");
	scanf("%s", str);

	printf("que posicion quiere cambiar?");
	scanf("%d" , &num);

	printf("que caracter desea poner?");
	scanf(" %c", &cambio);

	str[num - 1] = cambio;

	printf("la nueva palabra es: %s\n", str);
	return 0;
}



	
