#include<stdio.h>

int main() {
	int n1, n2, n3;
	
	printf("Enter three number : ");
	scanf("%d %d %d", &n1, &n2, &n3);
	
//	if (n1 > n2) {
//		n1 > n3 ? printf("%d", n1) : printf("%d", n3); 
//	} else  {
//		n2 > n3 ? printf("%d", n2) : printf("%d", n3); 
//	}
	
	printf("%d ", n1>n2? n1>n3?n1:n3 : n2>n3?n2:n3 );
		
		
	return 0;
}
