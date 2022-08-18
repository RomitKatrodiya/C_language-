#include<stdio.h>

int main() {
	int num, n1=0, n2=1, i, n3;
	
	printf("Enter the number : ");
	scanf("%d", &num);
	
	printf("%d %d", n1, n2);
	
	for (i=3; i<=num; i++) {
		
		n3 = n1 + n2;
		printf(" %d", n3);
		n1 = n2;
		n2 = n3;	
	}
	
	return 0;
}
