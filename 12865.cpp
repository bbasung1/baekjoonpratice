#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b;
    //cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    cin >> a >> b;
    //vector <vector <int>>c(a, vector<int>(2, 0));
    int** c=new int*[a];
    for (int i = 0; i < a; i++) {
        c[i] = new int[2];
        cin >> c[i][0] >> c[i][1];
    }
    //vector <vector <int>>d(a + 1, vector<int>(b + 1, 0));
    int** d = new int* [a + 1];
    for (int i = 0; i <= a; i++) {
        d[i] = new int[b + 1];
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