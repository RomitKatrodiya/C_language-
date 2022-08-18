#include<stdio.h>

int main() {
	int num, fact=1;
	
	printf("Enter the number : ");
	scanf("%d", &num);
	
	while (num != 0) {
		fact = fact * num;
		num--;
	}
	
	printf("%d", fact);
	 
	
	return 0;
}
