#include<stdio.h>

int main() {
	char str[50];
	int i;
	int freq[26]={0};

	printf("please Enter string : ");
	gets(str);
	
	for (i=0; str[i]!='\0'; i++) {
		freq[str[i] - 'a']++;
	}
	
	for (i=0; i<26; i++) {
		if (freq[i] != 0) {
			printf("%c=%d\n",'a'+i, freq[i]);
		}
	}
	
	return 0;
}
