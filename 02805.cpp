#include <iostream>
#include <algorithm>
using namespace std;
int test(long long n, long long m, long long b[])
{
    long long l = 1;
    long long u = *max_element(b,b+n);
    long long res=0;
    while (l <= u)
    {
    long long k = 0;
    long long f=(l+u)/2;
        for (long long i = 0; i < n; i++)
        {
            if(b[i]>f){
                k+=b[i]-f;
            }
        }
        if (k >= m)
        {
            if(res<f){
                res=f;
                l=f+1;
            }
        }
        else{
            u=f-1;
        }
    }
    return res;
}
int main()
{
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    long long n, m;
    cin >> n >> m;
    long long *b = new long long[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    cout<<test(n,m,b);
    delete []b;

}