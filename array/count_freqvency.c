#include<stdio.h>

int main() {
	int arr[50], n, i, j, freq[50], counter;
	
	printf("Enter the size of an array : ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		scanf("%d", &arr[i]);
		freq[i]=-1;
	} 
	
	for (i=0; i<n; i++) {
		counter = 1;
		for (j=i+1; j<n; j++) {
			if (arr[i] == arr[j]) {
				counter++;
				freq[j] = 0;
			}
		}
		if (freq[i] == -1) {
			freq[i] = counter;
		}
	}

	for (i=0; i<n; i++) {
		if (freq[i] != 0) {
			printf("%d = %d\n", arr[i], freq[i]);
		}	
	}
	
	return 0;
}

