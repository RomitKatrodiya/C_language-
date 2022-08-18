//write a programe to print first N terms of serice
//1 3 6 10 15 21 28 36 45 55
#include<stdio.h>

int main() {
	int  i, n, sum=0;
	
	printf("Enter the number : ");
	scanf("%d", &n);

	for (i=1; i<=n; i++) {
		sum = sum + i;
		printf("%d ",sum);
	} 
	
	return 0;
}
