#include <stdio.h>

int main()
{
	float f;
	int c;
	printf("Enter the temprature in Celsius: ");
	scanf("%d",&c);
	f=c*(9.0/5.0)+32;
	printf("The temprature in Fahrenheit is: %f",f);
}