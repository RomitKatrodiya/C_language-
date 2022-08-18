#include<stdio.h>

int main() {
	int age, weight;
	
	printf("Enter Age : ");
	scanf("%d", &age);
	
	printf("Enter Weight : ");
	scanf("%d", &weight);
	
	if (age >= 18) {
		if (weight >= 50) {
			printf("You Are Eligible ");
		} else {
			printf("Youre Weight is Under 50 ");
		}
	} else {
		printf("You Are Under 18 ");
	}
	
	return 0;
}
