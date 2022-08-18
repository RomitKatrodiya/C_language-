#include<stdio.h>

struct distance{
	int inch;
	int feet;
} d1, d2, total;

int main() {
	
	printf("please Enter distance 1 in feet and inch : ");
	scanf("%d %d", &d1.feet, &d1.inch);
	
	printf("please Enter distance 2 in feet and inch : ");
	scanf("%d %d", &d2.feet, &d2.inch);
	
	total.feet =    d1.feet +  d2.feet;
	total.inch =    d1.inch +  d2.inch;
	
	while (total.inch >= 12) {
		total.inch = total.inch - 12;
		total.feet++;
	}
	
	printf("total distance is : %d %d",total.feet, total.inch);
	
	return 0;
}

