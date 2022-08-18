#include<stdio.h>

int main() {
	int n;
	
	printf("Eneter number : ");
	scanf("%d", &n);
	
	if (n == 0)
		printf("! zero is zero !");
	else if(n > 0) 
		printf("%d number is positive ", n);
	else 
		printf("%d number is non positive ", n);
	
	return 0;
}
