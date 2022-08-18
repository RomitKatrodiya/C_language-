#include<stdio.h>

int main() {
	int arr[50], n, i, pos, updelem;
	
	printf("Enter the size of an array : ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	} 
	
	printf("position of new element : ");
	scanf("%d", &pos);
	
	printf("Enter the new element : ");
	scanf("%d", &updelem);
	
	arr[pos] = updelem;
	
	printf("After update : \n");
	for (i=0; i<n; i++) {
		printf("%d\n", arr[i]);
	} 
	
	
	return 0;
}
