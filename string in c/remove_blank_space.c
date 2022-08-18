#include<stdio.h>

int main() {
	char str[50];
	int i, j;
	
	printf("Enter the string : ");
	gets(str);
	
	for (i=0; str[i] != '\0'; i++) {
		while (str[i]==' ') {
			for (j=i; str[j]!='\0'; j++) {
				str[j] = str[j+1];
			}
		}
	}
	
	puts(str);

	return 0;
}

