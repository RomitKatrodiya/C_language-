#include<stdio.h>

int main() {
	char str1[50], str2[50];
	
	printf("Enter youre first name : ");
	gets(str1);
	
	printf("Enter youre last name : ");
	gets(str2);

	if (strcmp(str1, str2)==0) {
		printf("both are same ");
	} else {
		printf("both are not same ");		
	}
	
	return 0;
}
	
