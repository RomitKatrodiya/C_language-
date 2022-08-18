#include<stdio.h>

void sum(int arr[], int n) {
	int sum=0, i;
	
	for (i=0; i<n; i++) {
		sum = sum + arr[i];
	}
	
	printf("aum of an array : %d", sum);
}

int main() {
	int arr[50], n, i;
	
	printf("please Enter size of array : ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	
	sum(arr,n);
	
	return 0;
}

