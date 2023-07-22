#include <stdio.h>

int main()
{
    float length, width,perimeter;
    printf("enter the length and width of the rectangle:");
    scanf("%f %f",&length,&width);
    perimeter = length*2+width*2;
    printf("the perimeter =%f",perimeter);
}