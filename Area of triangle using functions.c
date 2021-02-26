#include<stdio.h>
#include<math.h>
float areaoftriangle(float,float,float);
main()
{
    float x,y,z,area;
    printf("Enter the value of the sides of triangle\n");
    scanf("%f %f %f",&x,&y,&z);
    area=areaoftriangle(x, y, z);
    printf("Area Of The Give Triangle is=%.3f",area);
    return 0;
}
float areaoftriangle(float x,float y,float z)
{
    float s,area;
    s=(x+y+z)/2;
    area=sqrt(s*(s-x)*(s-y)*(s-z));
    return area;
}
