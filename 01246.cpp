#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    long long* c = new long long[b];
    for (int i = 0; i < b; i++) {
        cin >> c[i];
    }
    sort(c, c + b, greater<>());
    long long price = 0, bal = 0;
    for (int i = 0; i < b; i++) {
        long long mok = 0;
        if (i + 1 < a) {
            mok = c[i] * (i + 1);
        }
        else {
            mok = c[i] * a;
        }
        if (mok >= bal) {
            bal = mok;
            price = c[i];
        }
    }
    cout << price << " " << bal << "\n";
}