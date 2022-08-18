#include<stdio.h>

int main() {
	int n;
	
	printf("Eneter number : ");
	scanf("%d", &n);
	// not sucsess
	
	if (!n&1)
	printf("Even ");
	else
	printf("odd ");
	
	return 0;
}
