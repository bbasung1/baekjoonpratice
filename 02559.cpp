#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int *c=new int[a + 1];
	c[0] = 0;
	for (int i = 1; i <= a; i++) {
		cin >> c[i];
		c[i] += c[i - 1];
	}
	int sum = 0;
	for (int i = 0; i <= a-b; i++) {
		int k = c[b + i ] - c[i];
		if (i == 0||sum<k) {
			sum = k;
		}
	}
	cout << sum << "\n";
	delete[]c;
}