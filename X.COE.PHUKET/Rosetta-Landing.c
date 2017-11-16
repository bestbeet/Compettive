#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float n,a,b,c;
    int sum = 0;
    int i;
    scanf("%f",&n);
    for(i = 0;i<n;i++){
        scanf("%f %f %f",&a,&b,&c);
        sum = sqrt(pow(a,2)+pow(b,2));
        if(sum == c){
            printf("Eureka!\n");
        }
        else
            printf("Ouch!\n");
        
    }
    

    return 0;
}