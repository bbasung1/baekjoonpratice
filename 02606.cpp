#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
//bool a[1001][1001];
bool chb[101];
vector <int> adj[101];
int b;
int ans=-1;
void bfs(int first) {
    queue<int> g;
    g.push(first);
    chb[first] = true;
    ans++;
    while (!g.empty()) {
        int cur = g.front();
        g.pop();
        for (int i = 0; i <adj[cur].size(); i++) {
            int next = adj[cur][i];
            if (!chb[next]) {
                chb[next] = true;
                ans++;
                g.push(next);
            }
        }
    }
}
int main() {
    int  c, d;
    cin >> b >> c ;
    int e, f;
    for (int i = 0; i < c; i++) {
        cin >> e >> f;
        adj[e].push_back(f);
        adj[f].push_back(e);
    }
    bfs(1);
    cout<<ans<<"\n";
}