#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    vector <vector <int>>c(a, vector<int>(2, 0));
    for (int i = 0; i < a; i++) {
        cin >> c[i][0] >> c[i][1];
    }
    vector <vector <int>>d(a + 1, vector<int>(b + 1, 0));
    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            if (i == 0 || j == 0) {
                d[i][j] = 0;
            }
            else if (c[i - 1][0] <= j) {
                d[i][j] = max(c[i - 1][1] + d[i - 1][j - c[i - 1][0]], d[i - 1][j]);
            }
            else {
                d[i][j] = d[i - 1][j];
            }
        }
    }
    cout << d[a][b] << "\n";
}