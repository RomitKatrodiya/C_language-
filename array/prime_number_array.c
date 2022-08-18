#include<stdio.h>

int main() {
	int arr[10], i, n, j, flag;
	
	printf("Enter the size of array : ");
	scanf("%d", &n);
	
	printf("Enter the number : \n");
	for (i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	} 
	
	printf("\nprime number : ");
	for (i=0; i<n; i++) {
		flag=1;
		for (j=2; j < arr[i]; j++) {
			if (arr[i] %j == 0) {
				flag=0;
				break;
			} 
		}
		if (flag == 1) {
			printf("%d  ",arr[i]);	
		} 
	}
	
	printf("\nnot prime number : ");
	for (i=0; i<n; i++) {
		flag=1;
		for (j=2; j < arr[i]; j++) {
			if (arr[i] %j == 0) {
				flag=0;
				break;
			} 
		}
		if (flag == 0) {
			printf("%d  ",arr[i]);	
		} 
	}
	
	return 0;
}
