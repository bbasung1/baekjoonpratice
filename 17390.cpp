#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
    long long a, b;
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    cin >> a >> b;
    long long* c = new long long[a];
    for (int i = 0; i < a; i++) {
        cin >> c[i];
    }
    sort(c,c+a);
    for (int i = 1; i < a; i++) {
        c[i] += c[i - 1];
    }
    for (int i = 0; i < b; i++) {
        long long d, e;
        cin >> d >> e;
        cout << (d==1?c[e-1]:c[e-1]-c[d-2]) << "\n";
    }
}