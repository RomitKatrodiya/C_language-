#include<stdio.h>

int main() {
	int arr[50], n, i;
	
	printf("Enter the size of array : ");
	scanf("%d", &n);
	
	printf("Enter element of array : \n");
	for (i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	
	printf("array element is : \n");
	for (i=0; i<n; i++) {
		printf("%d\n", arr[i]);
	}
	
	
	return 0;
}
