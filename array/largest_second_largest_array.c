#include<stdio.h>

int main() {
	int arr[50], n, i, m1=0, m2=0;
	
	printf("Enter the size of array : ");
	scanf("%d", &n);
	
	printf("Enter element of array : \n");
	for (i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	
	for (i=0; i<n; i++) {
		if (arr[i] > m1) {
			m2 = m1;
			m1 = arr[i];
		} else if (arr[i] < m1 && arr[i] > m2) {
			m2 = arr[i];
		}
	}
	
	printf("largest number is : %d \n", m1);
	printf("second largest number is : %d ", m2);

	return 0;
}
