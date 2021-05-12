#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
bool cop(string m, string n) {
	if (m.size() != n.size()) {
		return m.size() < n.size();
	}
	else {
		int z = 0, x = 0;
		for (int i = 0; i < m.size(); i++) {
			if (m[i] >= '0'&& m[i] <= '9') {
				z += m[i]-'0';
			}
		}
		for (int i = 0; i < n.size(); i++) {
			if (n[i] >= '0' && n[i] <= '9') {
				x += n[i]-'0';
			}
		}
		if (z != x) {
			return z < x;
		}
		else {
			return m < n;
		}
	}
}
int main() {
	int a;
	cin >> a;
	string *b=new string[a];
	for (int i = 0; i < a; i++) {
		cin >> b[i];
	}
	sort(b, b+a, cop);
	for (int i = 0; i < a; i++) {
		cout << b[i] << "\n";
	}
}