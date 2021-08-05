#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
//bool a[1001][1001];
bool chb[1001];
bool chd[1001];
vector <int> adj[1001];
int b;
void dfs(int index) {
    chd[index] = true;
    cout << index << " ";
    for (int i = 0; i <adj[index].size(); i++) {
        int next = adj[index][i];
        if (chd[next]) {
            continue;
        }
        dfs(next);
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
        for (int i = 0; i <adj[cur].size(); i++) {
            int next = adj[cur][i];
            if (!chb[next]) {
                chb[next] = true;
                cout << next << " ";
                g.push(next);
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
        /*a[e][f] = 1;
        a[f][e] = 1;*/
        adj[e].push_back(f);
        adj[f].push_back(e);
    }
    for (int i = 1; i <= 1000; i++) {
        sort(adj[i].begin(), adj[i].end());
    }
    dfs(d);
    cout << "\n";
    bfs(d);
}