#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
bool chb[1001];
vector <int> adj[1001];
int ans=0;
void bfs(int first) {
    queue<int> g;
    g.push(first);
    chb[first] = true;
    while (!g.empty()) {
        int cur = g.front();
        g.pop();
        for (int i = 0; i <adj[cur].size(); i++) {
            int next = adj[cur][i];
            if (!chb[next]) {
                chb[next] = true;
                g.push(next);
            }
        }
    }
}
int main() {
    int  c, d;
    cin >> d >> c;
    int e, f;
    for (int i = 0; i < c; i++) {
        cin >> e >> f;
        adj[e].push_back(f);
        adj[f].push_back(e);
    }
    for (int i = 1; i <= d; i++) {
        if(!chb[i]){
            ans++;
            bfs(i);
        }
    }
    cout<<ans<<"\n";
}