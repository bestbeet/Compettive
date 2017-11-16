#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int a,b,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        int oddsum = 0;
        for(j=a;j<=b;j++)
        {
            if(j%2==1)
            {
                oddsum += j;
            }
        }
        printf("Case %d: %d\n",i+1,oddsum);

    }


    exit(EXIT_SUCCESS);
}
