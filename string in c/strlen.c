#include<stdio.h>

int main() {
	char str[50];
	int n;
	
	printf("Enter youre city name : ");
	gets(str);
	
	n = strlen(str);
	
	printf("lenght of string is : %d", n);

	return 0;
}
