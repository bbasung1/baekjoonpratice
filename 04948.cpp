#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    long long a, b;
    while (cin >> a && a != 0) {
        vector <bool> c((2 * a) + 1);
        for (int i = 2; i <= 2 * a; i++) {
            if (c[i]) {
                continue;
            }
            for (int j = i + i; j <= 2 * a; j += i) {
                c[j] = 1;
            }
        }
        cout << count(c.begin()+a+1, c.end(), 0) << "\n";
    }
}