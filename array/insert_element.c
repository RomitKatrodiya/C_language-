#include<stdio.h>

int main() {
	int arr[50], n, i, pos, newelem;
	
	printf("Enter the size of an array : ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	} 
	
	printf("position of new element : ");
	scanf("%d", &pos);
	
	printf("Enter the new element : ");
	scanf("%d", &newelem);
	
	n++;
	
	for (i=n-1; i>pos; i--) {
		arr[i] = arr[i-1];
	}
	
	arr[pos] = newelem;
	
	printf("After inster : \n");
	for (i=0; i<n; i++) {
		printf("%d\n", arr[i]);
	} 
	
	
	return 0;
}
