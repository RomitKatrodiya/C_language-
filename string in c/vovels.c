#include<stdio.h>

int main() {
	char str[50];
	int i;
	
	printf("please Enter string : ");
	gets(str);
	
	i=0;
	
	while (str[i] != '\0') {
		if (str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u') {
			printf("%c \n", str[i]);
		}
		i++;
	}	
	
	return 0;
}
