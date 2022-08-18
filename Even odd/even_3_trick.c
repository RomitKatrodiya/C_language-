#include<stdio.h>

int main() {
	int n;
	
	printf("Eneter number : ");
	scanf("%d", &n);
	
	if (n / 2 * 2 == n)
	printf("Even ");
	else
	printf("odd ");
	
	return 0;
}
