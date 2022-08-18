#include<stdio.h>

int main() {
	int i, sum=0;
	
	for (i=1; i<=10; i++) {
		sum=sum+i;
	}
	
	printf("sum of 10 natural number : %d",sum);
	
	return 0;
}
