//#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char input[1000],temp[1000];
    int input_amount,shift,strlen_input,j,b;
    cin >> input_amount;
    for(int i=0;i<input_amount;i++)
    {
        cin >> input >> shift;
        for(j=0;j<strlen(input);j++)
        {
            if( j + 1 + shift > strlen(input) )
            {
                temp[j+shift-strlen(input)] = input[j];
            }
            else
            {
                temp[j+shift] = input[j];
            }
        }
        strlen_input = strlen(input);
        strcpy(input,temp);
		input[strlen_input] = '\0';
        cout << input << '\n';

    }
return 0;
}
