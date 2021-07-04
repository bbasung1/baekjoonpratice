#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long long a, b;
    long long c1=0, c2=0;
    cin >> a >> b;
    for (int i = 0; i < b; i++) {
        long long d1, d2;
        cin >> d1 >> d2;
        if (c1 > d1 || i == 0) {
            c1 = d1;
        }
        if (c2 > d2 || i == 0) {
            c2 = d2;
        }
    }
    long long res = min(c1 * (a / 6) + c2 * (a % 6), c1 * ((a / 6) + 1));
    res = min(res, c2 * a);
    cout << res;
}