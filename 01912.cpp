#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int a;
    cin >> a;
    vector <long long>b(a + 1);
    for (int i = 1; i <= a; i++) {
        cin >> b[i];
    }
    long long ans = -1001;
    for (int i = 1; i <= a; i++) {
        b[i] = max(b[i] + b[i - 1], b[i]);
        ans = max(ans, b[i]);
    }
    cout << ans << "\n";
}