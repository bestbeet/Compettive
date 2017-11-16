#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n <= 1000){
        printf("safe");
    }
    else{
        printf("dangerous");
    }

    exit(EXIT_SUCCESS);
}