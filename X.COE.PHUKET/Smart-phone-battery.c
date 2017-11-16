#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n,b,bat=0;
    scanf("%f",&n);
    while(n > 0){
        scanf("%f",&b);
        n = n-b;
        if(n >= 0)
        printf("%.2f\n",n);
        else{
           printf("%.2f\n",bat); 
        }
        
        
    }

    return 0;
}