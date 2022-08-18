#include<stdio.h>

int main() {
	int i, sum=0 ;
	
	for (i=100; i<=200; i++) {
		if (i %7 == 0) {
			sum = sum + i;
			printf("%d ",i);
		}
	}
	
	printf("\n 100 to 200  divied by 7 All number sum : %d",sum);
	
	return 0;
}
