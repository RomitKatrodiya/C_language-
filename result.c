#include<stdio.h>

int main() {
	int marks;
	
	printf("Enter The marks : ");
	scanf("%d", &marks);
	
	if (marks >= 91 && marks <= 100) {
		printf("Youre Grade is A ");
	} else if (marks >= 81 && marks <= 90) {
		printf("Youre Grade is B ");
	} else if (marks >= 71 && marks <= 80) {
		printf("Youre Grade is C ");
	} else if (marks >= 61 && marks <= 70) {
		printf("Youre Grade is D ");
	} else if (marks >= 40 && marks <= 60) {
		printf("Youre Grade is E ");
	} else if (marks < 40) {
		printf("! FAIL !");
	}

		
	return 0;
}
