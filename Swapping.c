#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,temp=0;
    printf("Enter two Numbers\n");
    scanf("%d %d",&a,&b);
    printf("Before Swap a=%d B=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter Swap a=%d b=%d",a,b);
    getch();

}
