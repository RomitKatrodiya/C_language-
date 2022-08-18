 #include<stdio.h>

int factorial(int num) {
	
	if (num > 1) {
		return num * factorial(num-1);
	} else {
		return 1;
	}
}

int main() {
	int num, res;
	
	printf("Enter the number : ");
	scanf("%d", &num);
	
	res = factorial(num);
	 
	printf("factorial value is : %d", res);
	
	return 0;
}

