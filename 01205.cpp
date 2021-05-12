#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, a, p;
    cin >> n >> a >> p;
    vector <int>b(n + 1);
    b[0] = a;
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    sort(b.begin(),b.end(),greater<int>());
    int c = find(b.begin(),b.end(),a) - b.begin() + 1;
    int d = count(b.begin(), b.end(), a);
    if (p > n) {
        cout << c << "\n";
    }
    else if( p >= c+d-1){
        cout << c << "\n";
    }
    else {
        cout << "-1\n";
    }
}