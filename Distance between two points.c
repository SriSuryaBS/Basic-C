#include<stdio.h>
#include<math.h>
void main()
{
    float x1,x2,y1,y2,distance;
    printf("Enter the value of X1 X2 Y1 Y2");
    scanf("%f %f %f %f",&x1,&x2,&y1,&y2);
    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)) ;
    printf("Distance between these two points=%f",distance);
    return 0;
}

