#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
    long long a;
    cin >> a;
    long long* b = new long long[a + 1];
    b[1] = 1, b[2] = 2, b[3] = 3;
    for (int i = 4; i <= a; i++) {
        long long c = i;
        long long cnt = 0;
        while (sqrt(c) > 1) {
            int d = sqrt(c);
            cnt++;
            c -= pow(d, 2);
        }
        b[i] = min(c + cnt, b[i - 1] + 1);
    }
    cout << b[a] << "\n";
}