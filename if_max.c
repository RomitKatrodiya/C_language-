#include<stdio.h>

int main() {
	int n1, n2, n3, n4;
	
	printf("Enter Foure number : ");
	scanf("%d%d%d%d",&n1, &n2, &n3, &n4);
	
	if (n1 > n2) {
		if (n1 > n3){
			if (n1 > n4) {
				printf("%d is max ", n1);
			} else {
				printf("%d is max ", n4);
			}
		} else {
			if (n3 > n4) {
				printf("%d is max ", n3);
			} else {
				printf("%d is max ", n4);	
			}
		}
	} else {
		if (n2 > n3) {
			if (n2 > n4) {
		    	printf("%d is max ", n2);
			} else {
				printf("%d is max ", n4);
			}
		} else {
			if (n3 > n4) {
				printf("%d is max ", n3);
			} else {
				printf("%d is max ", n4);
			}
		}
	}
	
	return 0;
}
