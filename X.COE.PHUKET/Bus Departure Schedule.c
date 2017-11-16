#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,a,b,c;
    int k,l;
    scanf("%d",&n);

    int time[n][4];
    for( i=0;i<n;i++)
    {
        for( j=0;j<4;j++)
        {
            scanf("%d",&time[i][j]);
        }
    }

    for( i=0;i<n;i++)
    {
        k = 1;
        l = 1;
        a = time[i][1];
        b = time[i][2];
        c = time[i][3];

        if ( (((a%2)==0) && ((b%2)==0)) && ((c%2)==0))
        {
            k = 2;
            if ( (((a%3)==0) && ((b%3)==0)) && ((c%3)==0))
            {
                l = 3;
            }

        }
        else if ( (((a%3)==0) && ((b%3)==0)) && ((c%3)==0))
        {
                l = 3;
        }

        if (((k*l)+time[i][0])<=23)
            printf("%d\n",(k*l)+time[i][0]);
        else
            printf("NO\n");
    }

    exit(EXIT_SUCCESS);
}
