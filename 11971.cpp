#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector <int> law;
    for (int i = 0; i < n; i++) {
        int l, s;
        cin >> l >> s;
        for (int i = 0; i < l; i++) {
            law.push_back(s);
        }
    }
    int temp = 0;
    int ans = 0;
    for (int i = 0; i < m; i++) {
        int l, s;
        cin >> l >> s;
        for (int i = temp; i < temp + l; i++) {
            if ((ans < s - law[i])||i==0) {
                ans = s - law[i];
            }
        }
        temp += l;
    }
    if (ans > 0) {
        cout << ans << "\n";
    }
    else {
        cout << "0\n";
    }
}