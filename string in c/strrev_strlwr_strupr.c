#include<stdio.h>

int main() {
	char str[50];
	
	printf("Enter youre city name : ");
	gets(str);
	
	strrev(str);
	printf("\nrevers string is :");	
	puts(str);
	
	strlwr(str);
	printf("\nstring in lwoercase :");	
	puts(str);
	
	strupr(str);
	printf("\nstring in upercase :");	
	puts(str);
	
	return 0;
}
