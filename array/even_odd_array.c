#include<stdio.h>

int main() {
	int arr[50], n, i, m1=0, m2=0;
	
	printf("Enter the size of array : ");
	scanf("%d", &n);
	
	printf("Enter element of array : \n");
	for (i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	
	printf("Even number is : ");
	for (i=0; i<n; i++) {
		if (arr[i] %2 == 0) {
			printf("%d ",arr[i]);
		}
	}
	
	printf("\nodd number is : ");
	for (i=0; i<n; i++) {
		if (arr[i] %2 == 1) {
			printf("%d ",arr[i]);
		}
	}
	
	return 0;
}
