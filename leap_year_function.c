#include<stdio.h>

int leap(int y) {
	
	if(y % 400 == 0) {
		return 1;
	} else if (y % 100 == 0) {
		return 0;
	} else if (y % 4 == 0) {
		return 1;
	} else {
		return 0;
	}
}

int main() {
	int year, a;
	
	printf("Enter the year : ");
	scanf("%d", &year);
	
	a =	leap(year);
	
	if (a == 1) {
		printf("Leap Year");
	} else {
		printf("! not Leap Year !");
	}
	
	return 0;
}
