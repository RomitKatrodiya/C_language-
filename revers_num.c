#include<stdio.h>

int main() {
	int a, n, rev;
	
	printf("Enter number : ");
	scanf("%d", &n);  //123
	
	while (n > 0) {
	a = n % 10;
	rev = rev * 10 + a;
	n = n / 10; 
	}
	
	printf("%d", rev);
	
	return 0;
}
