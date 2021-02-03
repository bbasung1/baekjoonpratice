#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    while (1)
    {
        string a;
        cin >> a;
        if (a == "#")
        {
            break;
        }
        int e = a.length() - 1;
        int d = 0;
        for (int b=0; b < a.length(); b++)
        {
            int c;
            if (a[b] == '-')
            {
                c = 0;
            }
            else if (a[b] == '\\')
            {
                c = 1;
            }
            else if (a[b] == '(')
            {
                c = 2;
            }
            else if (a[b] == '@')
            {
                c = 3;
            }
            else if (a[b] == '?')
            {
                c = 4;
            }
            else if (a[b] == '>')
            {
                c = 5;
            }
            else if (a[b] == '&')
            {
                c = 6;
            }
            else if (a[b] == '%')
            {
                c = 7;
            }
            else if (a[b] == '/')
            {
                c = -1;
            }
            d += c * pow(8, e);
            e--;
        }
        cout<<d<<endl;
    }
}