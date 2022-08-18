#include<stdio.h>

int main() {
	int num, i, a=0;
	
	printf("Enter The Number : ");           
	scanf("%d", &num);
	
	for (i=2; i<=num/2; i++) {
		if (num % i == 0) {
			a=1;
			break;
		}
		
	}
	
	if (a == 0) {
		printf("%d is prime number", num);
	} else {
		printf("%d is not a prime number", num);
	}
	
	return 0;
}
