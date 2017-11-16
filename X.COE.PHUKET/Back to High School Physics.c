#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v,t,out;

    while(scanf("%d %d",&v,&t) != EOF)
    {

                out = (2*t)*v;
                printf("%d\n",out);
    }

    exit(EXIT_SUCCESS);
}
