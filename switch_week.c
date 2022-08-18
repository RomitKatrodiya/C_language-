#include<stdio.h>

int main() {
	char ch;
	
	printf("Enter Any Chrecter : ");
	scanf("%c",&ch);
	
	switch (ch) {
		
		case 'M':
			printf("Monday");
			break;
		case 'T':
			printf("Tuseday");
			break;
		case 'W':
			printf("Wednesday");
			break;
		case 't':
			printf("thursday");
			break;	
		case 'F':
			printf("Friday");
			break;	
		case 'S':
			printf("Saterday");
			break;
		case 's':
			printf("sunday");
			break;
		default	:
			printf("invelid input");		
	}
	
	return 0;
}
