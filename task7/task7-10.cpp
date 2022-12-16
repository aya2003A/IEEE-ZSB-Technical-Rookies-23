#include <iostream>
#include<bits/stdc++.h>
#include <sstream>
using namespace std;
void toggle(char &ch)
{
    if (ch == '1')
    {
        ch = '0';
    }
    else
    {
        ch = '1';
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
     char lights[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            lights[i][j] = '1';
        }
    }
 
    int input[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> input[i][j];
            input[i][j] %= 2;
            if (input[i][j] == 1)
            {
                // toggle same element
                toggle(lights[i][j]);
                // upper element
                if (i - 1 >= 0)
                {
                    toggle(lights[i - 1][j]);
                }
                // lower element
                if (i + 1 < 3)
                {
                    toggle(lights[i + 1][j]);
                }
 
                // right element
                if (j + 1 < 3)
                {
                    toggle(lights[i][j + 1]);
                }
 
                // left element
                if (j - 1 >= 0)
                {
                    toggle(lights[i][j - 1]);
                }
            }
        }
    }
 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << lights[i][j] << "";
        }
        cout << "\n";
    }
    cout << "\n";

    
    return 0;
}