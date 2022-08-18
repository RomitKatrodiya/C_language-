#include<stdio.h>

void main() {
float celsius,fahrenheit;

printf("enter temp in celsius : ");
scanf("%f",&celsius);

fahrenheit = (celsius * 9/5)+32;

printf("%2.f celsius = %2.f fahrenheit",celsius,fahrenheit);

return 0;

}

