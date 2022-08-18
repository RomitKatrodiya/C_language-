// write a programe to print English alphabet lower case 
#include<stdio.h>

int main() {
	char i;
	
	for (i='a'; i<='z'; i++) {
		printf("%c ",i);
	}
	
	printf("\n");
	
	for (i=1; i<=26; i++) {
		printf("%c ", i+96);
	}
	
	printf("\n");
	
	for (i=97; i<=122; i++) {
		printf("%c ", i);
	}
	return 0;
}
