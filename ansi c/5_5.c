#include<stdio.h>

int main(){
	int maths, chem, phy, total, total_two;
	
	printf("Enter the marks of maths , phy and chem :");
	scanf("%d%d%d", &maths, &phy, &chem);
	
	total = maths + chem + phy ;
	total_two = maths + phy;
	
	if (maths >= 60 && phy >= 50 && chem >= 40) {
		if (total >= 200) {
			printf("you are eligible for admission");
		} 
	} else if (total_two >= 150) {
		printf("you are eligible for admission");
	} else {
		printf("you are not eligiblefor admission");
	}
   
	
	return 0;
}
