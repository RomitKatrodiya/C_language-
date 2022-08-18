#include<stdio.h>

int main() {
	
	int arr[50], n, i;
	int *p;
	
	printf("please Enter size of array : ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	
	p = &arr[n-1];
	
	for (i=0; i<n; i++) {
		printf("%d ", *(p-i));
	}
	
	return 0;
}

