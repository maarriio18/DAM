#include <stdio.h>
#include <stdlib.h>

int main(){
	char es_vocal;
	printf("ingrese una letra\n");
	scanf(" %c", &es_vocal);

	if  ( es_vocal == 'a'|| es_vocal == 'e' || es_vocal == 'o' || es_vocal == 'u' || es_vocal == 'i'|| es_vocal == 'A'|| es_vocal == 'E' || es_vocal == 'O'|| es_vocal == 'U'|| es_vocal == 'I'){
	printf("La letra %c es una vocal\n", es_vocal);
	} else { 
		printf("la letra %c no es una vocal\n");
	}
		return 0;












}

