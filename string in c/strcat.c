#include<stdio.h>

int main() {
	char str1[50], str2[50];
	
	printf("Enter youre first name : ");
	gets(str1);
	
	printf("Enter youre last name : ");
	gets(str2);

	strcat(str1, str2);
	
	puts(str1);
	
	return 0;
}
	
