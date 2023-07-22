#include <stdio.h>

int main()
{
    float length, width,area;
    printf("enter the length and width of the rectangle:");
    scanf("%f %f",&length,&width);
    area = length*width;
    printf("the area = %f",area);
}