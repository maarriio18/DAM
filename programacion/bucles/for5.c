#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	int final = 1;	
	printf("introduzca un numero");
	scanf("%d", &num);
	for(int i = 1; i <= num;i++){
	
		final = final * i;
	
	}
		printf("el resultado es %d ", final);

			return 0;
		

		
	






}
