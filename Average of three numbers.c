#include<stdio.h>
#include<math.h>
float AverageOfNumbers(float,float,float);
main()
{
    float a,b,c,average;
    printf("Enter three numbers\n");
    scanf("%f %f %f",&a,&b,&c);
    average=AverageOfNumbers(a, b, c);
    printf("The Average of Three Numbers is=%.2f",average);
    return 0;
}
float AverageOfNumbers(float a,float b,float c)
{
    float average;
    average=(a+b+c)/3;
    return average;
}
