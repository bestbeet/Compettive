#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,f,s,c=0;
    int i;
    scanf("%d %d %d",&a,&f,&s);
    int n[a];
    for(i = 0;i<a ;i++){
        scanf("%d",&n[i]);
        if(f+s == n[i])
        {
            c++;
        }
    }
    if(c > 0){
        printf("%d",f+s);
    }
    else
        printf("%d",c);

    exit(EXIT_SUCCESS);
}
