#include<stdio.h>

int main() {
	int n1, n2, n3;
	float avg;
	
	printf("please Enter three number : ");
	scanf("%d %d %d", &n1, &n2, &n3);
	
	avg = (n1+n2+n3) / 3.0;
	
	printf("average of three digit is %f", avg);
	
	return 0;
}
