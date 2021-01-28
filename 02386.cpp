#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    while (1)
    {
        int count = 0;
        char a;
        string b;
        getline(cin, b);
        a = b[0];
        if (a == '#')
        {
            break;
        }
        b.erase(0, 2);
        for (int i = 0; i < b.size(); i++)
        {

            b[i] = tolower(b[i]);
        }
        for (char &c : b)
        {
            if (c == a)
            {
                count++;
            }
        }
        cout << a << " " << count << endl;
    }
}