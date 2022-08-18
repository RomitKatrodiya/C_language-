#include<stdio.h>

int main() {
	int arr[50], n, i, pos;
	
	printf("Enter the size of an array : ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	} 
	
	printf("position of new element : ");
	scanf("%d", &pos);
	
	n--;
	
	for (i=pos; i<n; i++) {
		arr[i] = arr[i+1];
	}
	
	printf("After delete : \n");
	for (i=0; i<n; i++) {
		printf("%d\n", arr[i]);
	} 
	
	
	return 0;
}
