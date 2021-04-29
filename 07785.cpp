#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    int a;
    cin >> a;
    map<string,string,greater<string>> b;
    while (a--)
    {
        string c, d;
        cin >> c >> d;
        if (d == "leave")
        {
            b.erase(c);
            continue;
        }
        else
        {
            b[c]=c;
        }
    }
    for (auto i = b.begin(); i != b.end(); i++)
    {
        cout << i->first << "\n";
    }
}