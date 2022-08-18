// write a programe to calculet sum of N natural number 
#include<stdio.h>

int main() {
	int i, n, sum=0;
	
	printf("Enter the number : ");
	scanf("%d", &n);
	
//	for (i=1; i<=n; i++) {
//		sum = sum + i;
//	} 
	
	for (i=1, sum=0; i<=n; sum=sum+i, i++) ;
	
	printf("sum of %d natural number = %d", n, sum);
	
	return 0;
}
