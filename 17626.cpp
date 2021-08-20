#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
    long long a;
    cin >> a;
    long long* b = new long long[a + 1];
    for (int i = 0; i <= a; i++) {
        b[i] = i;
    }
    for (int i = 1; i <= a ; i++) {
        for (long long j = 2; j*j<=i; j++) {
            b[i] = min(b[i], b[i - j * j] + 1);
        }
    }
    cout << b[a] << "\n";
}