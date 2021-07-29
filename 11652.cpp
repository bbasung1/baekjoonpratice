#include <iostream>
#include <algorithm>
using namespace std;
//long long b[1000000];
int main() {
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    long long a;
    cin >> a;
    long long *b=new long long[a];
    for (int i = 0; i < a; i++) {
        cin >> b[i];
    }
    sort(b, b + a);
    long long mx1 = 0;
    long long mx2 = 1;
    long long ans = b[0];
    for (int i = 0; i < a - 1; i++) {
        if (b[i] == b[i + 1]) {
            mx2++;
            if (mx2 > mx1) {
                mx1 = mx2;
                ans = b[i];
            }
        }
        else {
            mx2 = 1;
        }
    }
    cout << ans << "\n";
}