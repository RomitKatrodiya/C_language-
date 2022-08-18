#include<stdio.h>

int main() {
	int num;
	
	printf("Enter The number : ");
	scanf("%d", &num);
	
	if (num > 0) {
		printf("%d is positive number ", num);
	} else if (num < 0) {
		printf("%d is nagative number ", num);
	} else {
		printf("The number is zero ");
	}
	
	
	return 0;
}
