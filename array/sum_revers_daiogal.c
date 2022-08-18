#include<stdio.h>

int main() {
	
	int arr[3][3] = {
			{1,2,3},
			{4,5,6},
			{7,8,9}
		};
	int i, j, a, b, c, sum=0;	
	
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			if (i==0 && j==2) {
				a=arr[i][j];
			} else if (i==1 && j==1) {
				b=arr[i][j];
			} else if (i==2 && j==0) {
				c=arr[i][j];
			}
		}
	}
	
	sum = a + b + c;
	
	printf("sum of revers daiogal is : %d", sum);
	
	return 0;
}
