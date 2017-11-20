#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int task_num;
    int str_len;
    int str[100];
    int j;
    cin >> task_num;
    for(int i=0;i<task_num;i++)
    {
        cin >> str_len;
        for(j=0;j<str_len;j++)
        {
            cin >> str[j];
        }
        sort(str,str+str_len);
        for(j=0;j<str_len;j++)
        {
            cout << str[j] << " ";
        }
        cout << "\n";
    }
return 0;
}
