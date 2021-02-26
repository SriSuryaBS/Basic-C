#include<stdio.h>
#include<conio.h>
void main()
{
    float fahrenheit,celsius=0;
    printf("Enter the value in fahrenheit:");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*5/9;
    printf("%f Fahrenheit = %0.4f Celsius",fahrenheit,celsius);
    return 0;

}
