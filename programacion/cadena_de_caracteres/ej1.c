#include<stdio.h>
#include<stdlib.h>
int main(){
	char str1[100];
	char str2[100];
	printf("introduce una palabra:");
	printf("%s", str1);
	scanf("%s", str1);
	scanf("%s", str2);
	printf("%s %s\n", str1, str2);
	

	return EXIT_SUCCESS;
}
		
