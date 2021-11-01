#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include<cstring>
using namespace std;
bool chb[50][50] = { 0, };
bool test[50][50] = { 0, };
short dx[4] = { 0,0,1,-1 };
short dy[4] = { 1,-1,0,0 };
int d, e;
void bfs(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int m = x + dx[i];
        int n = y + dy[i];
        if (m < 0 || m >= d || n < 0 || n >= e) {
            continue;
        }
        if (test[m][n] && !chb[m][n]) {
            chb[m][n] = 1;
            bfs(m, n);
        }
    }
}
int main() {
    int c;
    cin >> c;
    while (c--) {
        memset(test, 0, sizeof(test));
        memset(chb, 0, sizeof(chb));
        int f;
        int ans = 0;
        cin >> d >> e >> f;
        for (int i = 0; i < f; i++) {
            int x, y;
            cin >> x >> y;
            test[x][y] = 1;
        }
        for (int i = 0; i < d; i++) {
            for (int j = 0; j < e; j++) {
                if (test[i][j] && !chb[i][j]) {
                    ans++;
                    chb[i][j] = 1;
                    bfs(i, j);
                }
            }
        }
        cout << ans << "\n";
    }
}