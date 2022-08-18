#include<stdio.h>

int main() {
	int i, j, num, px, py;
	printf("Enter number :");
	scanf("%d",&num);
	px=num;
	py=num;
	
	for (i=1; i<=num; i++) {
		for (j=1; j<=num*2; j++) {
			if(j==px || j==py)
			printf("*");
			else
			printf(" ");
		}
		px--;
		py++;
		printf("\n");
	}
	
	
	return 0;
}
