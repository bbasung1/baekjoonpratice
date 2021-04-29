#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    int a;
    cin >> a;
    set<string,greater<string>> b;
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
            b.insert(c);
        }
    }
    for (auto i :b)
    {
        cout << i << "\n";
    }
}