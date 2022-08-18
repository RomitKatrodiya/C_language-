#include<stdio.h>

int main() {
	int num, rev=0, rem, org;
	
	printf("enter the number : ");
	scanf("%d", &num);
	
	org = num;            // c=425
	
	while (num > 0) {
		rem = num % 10;         //(1)b=425%10      b=5   (2) b=42%10   b=2   (3)b=4%10     b=4
		rev = rev * 10 + rem;   //(1)a=0*10+5      a=5   (2)a=5*10+2   a=52  (3)a=52*10+4  a=524
		num = num / 10;         //(1)num= 425/10  num=42 (2)num=42/10  num=4 (3)num=4/10   num=0
	}                                                             
                                                      	
	printf("\nrevers number is : %d\n\n", rev);   //a=524                        
	
	if(org == rev)   // c 425 == a 524  // false 
	printf("%d is palindrome", org);
	else
	printf("%d is not palindrome", org); 
	
	return 0;
}
