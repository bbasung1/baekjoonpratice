#include <iostream>
#include <queue>
using namespace std;
queue <pair<int, int>> a;
bool visit[100001];
int b, c, res;
bool vild(int n) {
    if (n < 0 || n>100000 || visit[n]) {
        return false;
    }
    visit[n] = true;
    return true;
}
void bfs(int n) {
    while (!a.empty()) {
        int data = a.front().first;
        int dep = a.front().second;
        a.pop();
        if (data == c) {
            res = dep;
            break;
        }
        if (vild(data - 1)) {
            a.push({ data - 1,dep + 1 });
        }
        if (vild(data + 1)) {
            a.push({ data +1,dep + 1 });
        }
        if (vild(2 * data)) {
            a.push({ data * 2,dep + 1 });
        }
    }
}
int main() {
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    cin >> b >> c;
    a.push({ b,0 });
    visit[b] = true;
    bfs(b);
    cout << res << "\n";
}