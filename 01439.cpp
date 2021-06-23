#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string a;
    cin >> a;
    long long c0 = 0, c1 = 0;
    char b = a[0];
    long long cur = a.find(b);
    while (cur != string::npos) {
        if (b == '0') {
            c0++;
            cur = a.find('1',cur);
            b = '1';
        }
        else if (b == '1') {
            c1++;
            cur = a.find('0',cur);
            b = '0';
        }
    }
    cout << min(c0, c1) << "\n";
}