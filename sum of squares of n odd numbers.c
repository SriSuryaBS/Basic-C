#include <stdio.h>
int main()
{
   int n,sum = 0;
   printf("Enter the value of n:");
   scanf("%d",&n);
   for (int i = 1; i <= n; i++)
      sum += (2*i - 1) * (2*i - 1);
   printf("The sum of square of first %d odd numbers is %d",n, sum);
   return 0;
}
