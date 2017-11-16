#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a;
    scanf("%d",&a);
    char b[100];
    int i,j;
    for(i = 0;i<=a;i++){
        gets(b);
        for(j = 0;j<strlen(b);j++){
        if(b[j]>= 'a'&& b[j] <= 'y'){
                b[j] = b[j]+1;
            }
            else if(b[j]>= 'A'&& b[j] <= 'Y'){
                b[j] = b[j]+1;
            }
            else if(b[j]>= '0'&& b[j] <= '8'){
                b[j] = b[j]+1;
            }
        }
        printf("%s\n",b);
    }
  
    return 0;
}