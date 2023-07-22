#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter the two numbers:");
    scanf("%d %d",&x,&y);
    printf("the sum is %d\n",x+y);
    printf("the difference is %d\n",x-y);
    printf("the product is %d\n",x*y);
    printf("the division is %f\n",(float)x/(float)y);
    
}