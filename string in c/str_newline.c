#include<stdio.h>

int main() {
	char str[50];
	int i;
	
	printf("Enter youre city name : ");
	gets(str);
	
	for (i=0; str[i]!='\0'; i++) {
		printf("%c\n", str[i]);
	}
	
	return 0;
}
