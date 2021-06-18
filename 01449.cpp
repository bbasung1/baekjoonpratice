#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int first = a[0];
    double w = a[0] + m - 0.5;
    int ans = 1;
    for (int i = 0; i < n; i++) {
        if (w < a[i]+0.5) {
            ans++;
            w = a[i] + m - 0.5;
        }
    }
    cout << ans << "\n";
}