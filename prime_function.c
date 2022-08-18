#include<stdio.h>

void prime() {
	int num, flag=0, i;
	
	printf("Enter the number : ");
	scanf("%d", &num);
	
	if (num > 1) {
		if (num == 2) {
			flag=0;
		} else {
			for (i=2; i<num; i++) {
				if (num %i == 0) {
					flag=1;
					break;
				}
			}
		}
	}
	
	if (flag == 0) {
		printf("%d is prime number", num);
	} else {
		printf("%d is not prime number", num);
	}
	
}

int main() {

	prime();
		
	return 0;
}
