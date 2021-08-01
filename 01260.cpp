#include <iostream>
#include <vector>
#include <queue>
using namespace std;
bool a[1001][1001];
bool chb[1001];
bool chd[1001];
int b;
void dfs(int index) {
    chd[index] = true;
    cout << index << " ";
    for (int i = 1; i <=b; i++) {
        if (a[index][i]&&!chd[i]) {
            dfs(i);
        }
    }
}
void bfs(int first) {
    queue<int> g;
    g.push(first);
    chb[first] = true;
    cout << g.front() << " ";
    while (!g.empty()) {
        int cur = g.front();
        g.pop();
        for (int i = 1; i <=b; i++) {
            if (a[cur][i]&&!chb[i]) {
                g.push(i);
                chb[i] = true;
                cout << i << " ";
            }
        }
    }
}
int main() {
    int  c, d;
    cin >> b >> c >> d;
    int e, f;
    for (int i = 0; i < c; i++) {
        cin >> e >> f;
        a[e][f] = 1;
        a[f][e] = 1;
    }
    dfs(d);
    cout << "\n";
    bfs(d);
}