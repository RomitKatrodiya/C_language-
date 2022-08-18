#include<stdio.h>

int main() {
	int num, fact=1;
	
	printf("Enter The number : ");
	scanf("%d",&num);
	
	while (num >= 1) {
		fact = fact * num;
		num--;
	}
	printf("factorial value is : %d", fact);
	
	return 0;
}
