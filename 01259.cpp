#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    while (1)
    {
        string a;
        cin >> a;
        if (a == "0")
        {
            break;
        }
        int b = a.length() / 2;
        string c = a.substr(0, b);
        reverse(c.begin(), c.end());
        if (a.length() % 2 == 1)
        {
            b++;
        }
        if (a.substr(b) == c)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}