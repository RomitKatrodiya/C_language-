#include<stdio.h>

int main() {
	int i, arr[10], j, max=0;
	
	printf("Enter 10 Element : ");
	
	for (i=0; i<10; i++) {
		scanf("%d", &arr[i]);
	}
	
	for (i=0; i<10; i++) {
		for (j=i+1; j<=10; j++) {
			if (arr[i] < arr[j]) {
				max = arr[i];
			} 
		}
	}
	
	printf("max = %d", max);
	
	return 0;
}
