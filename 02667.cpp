#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include<cstring>
using namespace std;
bool chb[50][50] = { 0, };
int c;
string test[25];
short dx[4] = { 0,0,1,-1 };
short dy[4] = { 1,-1,0,0 };
int d=0, e;
void bfs(int x, int y) {
            d++;
    for (int i = 0; i < 4; i++) {
        int m = x + dx[i];
        int n = y + dy[i];
        if (m < 0 || m >= c || n < 0 || n >= c) {
            continue;
        }
        if (test[m][n]=='1' && !chb[m][n]) {
            chb[m][n] = 1;
            bfs(m, n);
        }
    }
}
int main() {
        //memset(test, 0, sizeof(test));
        memset(chb, 0, sizeof(chb));
        cin>>c;
        vector <int>p;
        //string *k=new string[c];
        int f;
        int ans = 0;
        //cin >> d >> e >> f;
        for (int i = 0; i < c; i++) {
            cin>>test[i];
        }
        for (int i = 0; i < c; i++) {
            for (int j = 0; j < c; j++) {
                if (test[i][j]=='1' && !chb[i][j]) {
                    ans++;
                    chb[i][j] = 1;
                    d=0;
                    bfs(i, j);
                    p.push_back(d);
                }
            }
        }
        cout << ans << "\n";
        sort(p.begin(),p.end());
        for(int i=0;i<p.size();i++){
            cout<<p[i]<<"\n";
        }
    }