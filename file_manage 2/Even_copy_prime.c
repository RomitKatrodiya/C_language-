#include<stdio.h>

int main() {
	FILE *fp1, *fp2;
	char str1[50], str2[50], ch;
	
	printf("Enter file 1 name : ");
	gets(str1); 
	
	printf("Enter file 2 name : ");
	gets(str2);

	fp1 = fopen(str1, "r");
	fp2 = fopen(str2, "w");
	
	ch = fgetc(fp1);
	
	while (ch != EOF) {
		fputc(ch, fp2);
		ch = fgetc(fp1);
	}
		
	return 0;
}

