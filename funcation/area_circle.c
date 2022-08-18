//  no return value no perameter

#include<stdio.h>

float areaofcircle() {
	float area, r;
	
	printf("Enter the redius of area : ");
	scanf("%f", &r);
	
	area = 3.14 * r * r;
	
	return area;	
}

int main() {
	float res, res1;
	
	res = areaofcircle(); 
	res1 = areaofcircle(); 
	
	printf("Area of circle is : %f\n", res);
	printf("Area of circle is : %f", res1);
	
	return 0;
}
