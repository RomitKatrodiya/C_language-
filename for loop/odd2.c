#include<stdio.h>

int main() {
	int num, i, sum=0;
	
	printf("ENter the number : ");
	scanf("%d", &num);
	
	for (i=1; i<=num; i++) {
		sum = sum + 2*i-1;
	}
	
	printf("sum is : %d", sum);
	
	return 0;
}
