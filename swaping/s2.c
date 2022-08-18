#include<stdio.h>

int main() {
	int a, b, c;
	
	printf("Enter two number : ");
	scanf("%d %d", &a, &b); 
	
	c=a;
	a=b;
	b=c;
	
	printf("%d %d", a, b);
	
	return 0;
}
