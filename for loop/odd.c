// write a program to print first N odd numbers 
#include<stdio.h>

int main() {
	int i, n;
	
	printf("Enter the number : ");
	scanf("%d", &n);
	
	for (i=1; i<=n; i++) { 
			printf("%d ",2*i-1);
	} 
	
/*	for (i=1; i<=n*2; i++) { 
		if (i % 2 != 0) {    // or  // if (i % 2 == 1)
			printf("%d ", i);
		}
	} */
	
	
	return 0;
}
