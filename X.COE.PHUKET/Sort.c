#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number[5];
    int i,j,swap;
    for ( i = 0 ; i < 5 ; i++)
        scanf("%d",&number[i]);
        
    for(i = 0 ; i < 5-1 ; i++)
    {
        for(j = i + 1 ; j < 5 ; j++)
        {
            if(number[i] > number[j])
            {
                swap = number[i];
                number[i] = number[j];
                number[j] = swap;
            }
        }
    }
    for (i = 0 ; i < 5 ; i++ )
        printf("%d\n", number[i]);

    exit(EXIT_SUCCESS);
}