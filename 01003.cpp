#include <iostream>
using namespace std;
int main()
{
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    long long k;
    cin >> k;
    while (k--)
    {
        long long a = 0;
        long long b = 1;
        int n;
        long long c;
        cin >> n;
        if(n==0){
            cout<<"1 0\n";
            continue;
        }
        else if(n==1){
            cout<<"0 1\n";
            continue;
        }
        n--;
        for (n; n > 0; n--)
        {
            c = a + b;
            a = b;
            b = c;
        }
        cout << a << " " << b <<"\n";
    }
}