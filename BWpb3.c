#include<stdio.h>

int main()
{
    int num, bitnum, result;
	printf("enter the number:");
	scanf("%d",&num);
	printf("enter the bit number:");
	scanf("%d",&bitnum);
    result = (num>>bitnum)&1 ;
	printf("The value of of the bit number %d in %d is %d",bitnum,num,result);
	
	}