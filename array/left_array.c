#include<stdio.h>

int main() {
	int arr[50], n, i, first;
	
	printf("Enter the size of an array : ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	} 
	
	first=arr[0];
	
	for (i=1; i<n; i++) {
		arr[i-1]=arr[i];
	} 
	
	arr[n-1]=first;
	
	for (i=0; i<n; i++) {
		printf("%d ", arr[i]);
	} 
	
	return 0;
	
}
