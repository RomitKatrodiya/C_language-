#include<stdio.h>

int main() {
	int arr[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
		
	int trans[3][3];
	int i,j;

	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			trans[j][i]=arr[i][j] ;
		}
	}
	
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			printf("%d ", trans[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}

