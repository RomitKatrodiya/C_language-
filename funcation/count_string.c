#include<stdio.h>

int strlenght(char str[]) {
	int i, counter=0;
	
	for (i=0; str[i]!='\0'; i++) {
		counter++;
	}
	
	return counter;
}

int main() {
	char str[50];
	int res;
	
	printf("Please Enter string: ");
	gets(str);
	
	res = strlenght(str);
	
	printf("lenght of sttring is : %d", res);
	
	return 0;
}

