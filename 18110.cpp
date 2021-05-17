#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    if(n==0){
        cout<<n<<"\n";
        return 0;
    }
    float a = n * 0.15;
    a=round(a);
    vector <int>p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    sort(p.begin(), p.end());
    float c = 0;
    for (int i = a; i < n - a; i++) {
        c +=p[i];
    }
    c/=(n - 2 * a);
    cout <<round(c)<<"\n";
}