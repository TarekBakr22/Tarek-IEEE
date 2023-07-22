#include <stdio.h>

int main()
{
    int days,weeks,year;
    printf("enter the number of days:");
    scanf("%d",&days);
    year=days/365;
    weeks=(days%365)/7;
    days= days - ((year * 365) + (weeks * 7));
    printf("%d year\n%d weeks\n%d days",year,weeks,days);
}