#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    while (1)
    {
        string a;
        getline(cin, a);
        if (a == "#")
        {
            break;
        }
        string b = "aeiouAEIOU";
        int co = 0;
        for (char &k : b)
        {
            co += count(a.begin(), a.end(), k);
        }
        cout << co << endl;
    }
}