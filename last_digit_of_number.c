#include<stdio.h>

int main() {
	int n, last;
	
	printf("please Enter number : ");
	scanf("%d", &n);
	
	last = n % 10;
	
	printf("last digit is %d", last);
	
	return 0;
}
	
