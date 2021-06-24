#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a;
	cin >> a;
	while (a--) {
		long long answer = 1;
		int b, c;
		cin >> c >> b;
		if (c > (b / 2)) {
			c = b-c;
		}
		for (int i = 0; i < c; i++) {
			answer *= (b-i);
		}
		for (int i = 1; i < c+1; i++) {
			answer /=i;
		}
		cout << answer << "\n";
	}
}