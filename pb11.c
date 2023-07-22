#include <stdio.h>
#include <math.h>

int main()
{
   int base,exp,result;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);
     result = pow(base, exp);
     printf("%d ^ %d = %d",base,exp,result);
}