#include <iostream>
using namespace std;
int main() {
	long long a, b, c, d;
	cin >> a >> b >> c;
	d = a % b;
	a = d * 10;
	for (int i = 0; i < c; i++) {
		d = a / b;
		a = (a%b) * 10;
	}
	cout << d << "\n";
}