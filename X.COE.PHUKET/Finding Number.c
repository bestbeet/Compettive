#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,N;
    scanf("%d",&N);
    int set[N],ch[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&set[i]);
        ch[i] = 0;
    }

    int tmp;

    while(scanf("%d",&tmp))
    {
        for(i=0;i<N;i++)
        {
            if(ch[i]==0&&tmp==set[i])
            {
                ch[i] = 1;
            }
        }
    }

    for(i=0;i<N;i++)
    {
        if(ch[i]==1)
        {
           printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    exit(EXIT_SUCCESS);
}
