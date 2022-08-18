#include<stdio.h>

void sumofdigit(int num) {
	int sum=0,mod;
	
	while (num != 0) {
		mod = num % 10;
		sum = sum + mod;
		num= num/10;
	} 
	
	printf("sum of all digits : %d", sum);
	
}


int main() {
	int n;
	
	printf("Enter the number : ");
	scanf("%d", &n);
	
	sumofdigit(n);
	
	return 0;
}
