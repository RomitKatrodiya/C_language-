#include<stdio.h>

int main() {
	char str[50];
	int i, j, k;
	
	printf("please Enter full name : ");
	gets(str);
	
	for (i=0; str[i]!='\0'; i++) {
		for (j=i+1; str[j]!='\0'; j++) {
			while (str[i]==str[j]) {
				for (k=j; str[k]!='\0'; k++) {
					str[k]=str[k+1];
				}
			}
		}
	}
	
	puts(str);	
	
	return 0;
}
