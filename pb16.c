#include <stdio.h>

int main()
{
  float s1,s2,s3,s4,s5,total,avg,percentage;
  printf("enter the grades of the five subjects:");
  scanf("%f%f%f%f%f" ,&s1,&s2,&s3,&s4,&s5);
  total = s1+s2+s3+s4+s5;
  avg= total/5;
  percentage= (total/500) *100;
  printf("The total grades are:%f\nThe average is:%f\nThe percentage is:%f",total,avg,percentage);

}