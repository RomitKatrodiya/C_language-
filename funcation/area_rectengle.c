// no return value whith perameter

#include<stdio.h>

void area(int len, int w) {
	int area;
	
	area = len * w;
	
	printf("Area of rectengle is : %d\n", area);
}

int main() {
	int len, wid;
	
	printf("Enter lenght : ");
	scanf("%d", &len);
	
	printf("Enter widht : ");
	scanf("%d", &wid);
	
	area(len, wid);
	
	area(11,21);
	
	area(5, 10);
	return 0;
}
