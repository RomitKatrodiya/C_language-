#include<stdio.h>

void find(int a, int b, int *g, int *l) {
	if (a > b) {
		*g = a;
		*l = b;
	} else {
		*g = b;
		*l = a;
	}
}

int main() {
	int a, b, grater, lesser;
	
	printf("Enter two number : \n");
	scanf("%d %d", &a, &b);
	
	find(a, b, &grater, &lesser);
	
	printf("grater : %d \n", grater);
	printf("lesser : %d \n", lesser);

}

