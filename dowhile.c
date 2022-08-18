#include<stdio.h>

int main() {
	int i;
	
	i=100;
	
//	while (i <= 10) {
//		printf("%d\n", i);
//		i++;
//	}
	
	do {
		printf("%d\n", i);
		i++;
	} while (i <= 10);
	
	return 0;
}
