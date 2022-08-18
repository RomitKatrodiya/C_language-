//write a programe to print first N terms of serice
//2 5 10 17 26 37 50 65 82 101
#include<stdio.h>

int main() {
	int  i, n, sum=0;
	
	printf("Enter the number : ");
	scanf("%d", &n);

	for (i=1; i<=n; i++) {
		printf("%d ", i*i+1);
	} 
	
	return 0;
}
