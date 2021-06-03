#include <iostream>
#include <algorithm>
using namespace std;
int test(int n, int m, int b[])
{
    long long l = 1;
    long long u = *max_element(b, b + n);
    long long res = 0;
    while (l <= u)
    {
        int k = 0;
        long long f = (l + u) / 2;
        for (int i = 0; i < n; i++)
        {
            if (b[i] <= f) {
                k += b[i];
            }
            else {
                k += f;
            }
        }
        if (k <= m)
        {
            if (res < f) {
                res = f;
                l = f + 1;
            }
        }
        else {
            u = f - 1;
        }
    }
    return res;
}
int main()
{
    int n, m;
    cin >> n ;
    int* b = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    cin >> m;
    cout << test(n, m, b);
    delete[]b;

}