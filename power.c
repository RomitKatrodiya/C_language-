#include<stdio.h>

int main() {
	int a, b, s=1, i;
	
	printf("Enter two number :");
	scanf("%d %d", &a, &b);
	
	for (i=1; i<=b; i++) {
		s = s * a;
	}
	printf("%d", s);
	
	return 0;
}
