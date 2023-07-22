#include <stdio.h>

int main()
{
    char num, flippednum;

    printf("Enter any number: ");
    scanf("%d", &num);

    flippednum = ~num;
    printf("Number after bits are flipped = %d ", flippednum);
    
}