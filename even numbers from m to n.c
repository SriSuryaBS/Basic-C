#include <stdio.h>

int main()
{
    int i, m, n;
    printf("Enter the limits: ");
    scanf("%d %d",&m, &n);
    printf("Even numbers from %d to %d are: \n",m, n);

    for(i=m; i<=n; i++)
    {
      if(i%2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
