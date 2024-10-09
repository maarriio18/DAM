#include <stdio.h>
#include <stdlib.h>

int main(){

	int num;
	printf("introduce la calificacion\n");
	scanf("%d", &num);

	( num >= 5 ) ? printf("aprobado\n") : printf("suspenso\n");
	return 0;
}

