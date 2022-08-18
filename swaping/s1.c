#include<stdio.h>

int main() {
	int a, b;
	
	printf("Enter two number : ");
	scanf("%d %d", &a, &b); 
	
	//1
	b = (a+b) - (a=b);
	
	printf("%d %d", a, b);
	
	return 0;
}
