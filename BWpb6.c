#include<stdio.h>

int main()
{
    int num, bitnum, result;
	printf("enter the number:");
	scanf("%d",&num);
	printf("enter the bit number:");
	scanf("%d",&bitnum);
	result = num ^ (1<<bitnum);
	printf("%d after toggling bit %d is %d",num,bitnum,result);
	
	}