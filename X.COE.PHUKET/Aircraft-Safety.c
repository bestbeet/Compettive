#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a <= 7000 )
        printf("light");
    else if(a > 7000 && a < 136000)
        printf("large");
    else
        printf("heavy");

    return 0;
}