#include<stdio.h>

int main() {
	int num, first, last, sum=0;
	
	printf("Enter the number : ");
	scanf("%d", &num);
	
	last = num % 10;
	
	while (num >= 9) {
		num = num / 10;
	}
	
	first = num;
	
	sum = first + last;
	
	printf("sum of first and last digit is : %d ", sum);
	
	return 0;
}
