#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,s,area;
    printf("Enter the value of sides of triangle");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area Of Triangle=%0.3f",area);
    return 0;
}
