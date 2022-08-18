//   return value with perameter

#include<stdio.h>

int add(int a, int b) {
	int c;
	c = a + b;
	return c;
}
int sub(int a, int b) {
	int c;
	c = a - b;
	return c;
}
int mul(int a, int b) {
	int c;
	c = a * b;
	return c;
}
int div(int a, int b) {
	int c;
	c = a / b;
	return c;
}

int main() {
	int a, b, res;
	char op;
	
	printf("Enter two number : \n");
	scanf("%d %d",&a, &b);
	
	printf("Enter opretor : ");
	scanf(" %c", &op);
	
	switch (op) {
		case '+':
			res = add(a,b);
			break;
		case '-':
			res = sub(a,b);
			break;
		case '*':
			res = mul(a,b);
			break;
		case '/':
			res = div(a,b);
			break;					
	}
	
	printf("%d %c %d = %d ", a, op, b, res);
	
	return 0;
}
