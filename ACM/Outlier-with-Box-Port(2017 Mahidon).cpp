#include <iostream>
#include <malloc.h>
using namespace std;

float findq1(float *arr,float n)
{
    float q1;

        if ( (n/4) - (int)(n/4) == 0 )
            {
                //cout << "sw 0\n";
                q1 = arr[(int)(n/4) - 1];
            }
        else
            {
                //cout << "sw 1\n";
                q1 = arr[ (int)(n/4) - 1] + ( (arr[ (int)(n/4) + 1 - 1] - arr[ (int)(n/4) - 1]) * ( (n/4) - (int)(n/4) ) ) ;
            }
            return q1;
}

float findq3(float *arr,float n)
{
    float q3;

        if ( (n*3/4) - (int)(n*3/4) == 0 )
            {
                //cout << "sw 2\n";
                q3 = arr[(int)(n*3/4) - 1];
            }
        else
            {
                //cout << "sw 3\n";
                    q3 = arr[ (int)(n*3/4) - 1] + ( (arr[ (int)(n*3/4) +1 - 1] - arr[ (int)(n*3/4) - 1]) * ( (n*3/4) - (int)(n*3/4) ) );
            }
            return q3;
}

int main()
{
int loop;
cin >> loop;
int amount;
float *arr = (float*)malloc(sizeof(float)*100);
float n,iqr,ll,ul;
float q1 , q3;
int sw =0;

for(int i=0;i<loop;i++)
{
    cin >> amount;
    for(int j=0;j<amount;j++)
    {
        cin >> arr[j];
    }
    q1 = findq1(arr,amount+1);
    q3 = findq3(arr,amount+1);
//    if(q1 < 0)
//        q1 = -q1;
//    if(q3 < 0)
//        q3 = -q3;

//    cout << "q1 = "  << q1 << '\n';
//    cout << "q3 = "  << q3 << '\n';
    iqr = q3 - q1;
    ll = q1 - 1.5*iqr;
    ul = q3 + 1.5*iqr;
    for(int j=0;j<amount;j++)
    {
        if(arr[j] < ll || arr[j] > ul)
       {
           cout << arr[j] << ' ';
            sw = 1;
       }
    }

    if(sw == 0)
    {
        cout << "None";
    }
    cout << '\n';
    sw = 0;
    free(arr);
}
return 0;
}

