#include<stdio.h>

struct student{
	int roll_no;
	char name[50];
	int chem_mark;
	int phy_mark;
	int maths_mark;
};

int main() {
	int i;
	struct student s[5];
	
	for (i=0; i<5; i++) {
		printf("please Enter roll number : ");
		scanf("%d", &s[i].roll_no);
				
		printf("please Enter name : ");
		scanf("%s", &s[i].name);
		
		printf("please Enter chemestry mark : ");
		scanf("%d", &s[i].chem_mark);
		
		printf("please Enter physics mark : ");
		scanf("%d", &s[i].phy_mark);
		
		printf("please Enter maths mark : ");
		scanf("%d", &s[i].maths_mark);
		printf("\n");
	}
	
	for (i=0; i<5; i++) {
		float per;
		per = (float)(s[i].chem_mark + s[i].phy_mark + s[i].maths_mark)/3;
		
		printf("Roll number : %d   percentage : %f\n", s[i].roll_no, per);
	}
	
	return 0;
}

