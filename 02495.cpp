#include <iostream>
#include <string>
using namespace std;
int main()
{
    for (int i = 0; i < 3; i++)
    {
        string a;
        int c = 1;
        int d = 1;
        cin >> a;
        for (int j = 0; j < a.length() - 1; j++)
        {
            if (a[j] == a[j + 1])
            {
                c++;
            }
            else
            {
                c = 1;
            }
            if (d < c)
            {
                d = c;
            }
        }
        cout << d << endl;
    }
}