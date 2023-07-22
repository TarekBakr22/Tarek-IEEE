#include <stdio.h>

int main()
{
    int num, msb;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Shift the number to the left until the MSB is at the first position
    while(num >> 1)
    {
        num = num >> 1;
    }

    msb = num & 1;
    if(msb == 1)
    {
        printf("MSB is set\n");
    }
    else
    {
        printf("MSB is not set\n");
    }

}