#include<stdio.h>

int main() {
	char str[50];
	int i, n, counter=0;
	
	printf("Enter the string : ");
	gets(str);
	
	n = strlen(str);
	
	for (i=0; i<n/2; i++) {
		if (str[i]==str[n-i-1]) {
			counter++;
		}
	}
	
	if (i==counter) {
		printf("string is palindrome");
	} else {
		printf("string is not palindrome");
	}
	
	return 0;
}

