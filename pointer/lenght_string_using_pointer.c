#include<stdio.h>

void strlen(char *s){
	int counter=0;
	while (*s != '\0') {
		counter++;
		s++;
	}
	
	printf("lenght of string : %d", counter);	
}

int main() {
	char str[50];
	
	printf("please Enter string : ");
	gets(str);
	
	strlen(str);
	
	return 0;
}

