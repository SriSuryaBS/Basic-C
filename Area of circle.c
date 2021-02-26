#include<stdio.h>
#include<math.h>

void main()
{
    float pi=3.14,r,area,circumference;
    printf("Enter the value of Radius");
    scanf("%f",&r);
    circumference=2*pi*r;
    area=pi*r*r;
    printf("Circumference of Circle=%f \nArea of Circle=%f",circumference,area);
    return 0;
}

