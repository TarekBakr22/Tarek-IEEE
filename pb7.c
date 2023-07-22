#include <stdio.h>

int main()
{ 
    float cm,m,km;
    printf("enter the length in cm:");
    scanf("%f",&cm);
    m=cm/100;
    km=cm/1000;
    printf("the length in KM is: %f\nthe length in M is: %f",km,m);
}