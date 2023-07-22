#include <stdio.h>

int main()
{ float r,diameter,Area,Circumference;
  printf("Enter the radius of the circle:");
  scanf("%f",&r);
  diameter=2*r;
  Area=3.14*r*r;
  Circumference=2*3.14*r;
  printf("The diameter is:%f \nThe Area is:%f \nThe Circumference is:%f",diameter,Area,Circumference);
}
  