#include <iostream>
using namespace std;
int main() {
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
	int a;
	cin >> a;
	long long* c = new long long[a+1];
	for (int i = 1; i <= a; i++) {
		cin >> c[i];
		c[i] += c[i - 1];
	}
	cin >> a;
	while (a--) {
		int d, e;
		cin >> d >> e;
		cout << c[e] - c[d - 1] << "\n";
	}
}