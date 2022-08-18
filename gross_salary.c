#include<stdio.h>

int main() {
	int base_salary;
	float hra, da, ta, gross_salary;
	
	printf("Enter base salary : ");
	scanf("%d", &base_salary);
	
	hra = base_salary * 0.10;
	da = base_salary * 0.05;
	ta = base_salary * 0.08;
	
	gross_salary = base_salary + hra + da + ta;
	
	printf("gross salary is : %f", gross_salary);
	
	return 0;
}
