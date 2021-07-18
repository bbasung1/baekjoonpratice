#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int a, b;
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
	cin >> a >> b;
	vector <vector <int>> c(a, vector <int>(a));
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			cin >> c[i][j];
			if (j != 0) {
				c[i][j] += c[i][j - 1];
			}
		}
	}
	for (int i = 0; i < b; i++) {
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		long long ans = 0;
		for(int j=x1-1;j<x2;j++){
			if (y1 == 1) {
				ans += c[j][y2 - 1];
			}
			else {
				ans += c[j][y2 - 1] - c[j][y1 - 2];
			}
		}
			cout << ans << "\n";
	}
}