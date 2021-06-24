#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	long long a = 666;
	long long b = 1;
	string c="666";
	while (n != b) {
		a++;
		c = to_string(a);
		if (c.find("666") != string::npos) {
			b++;
		}
	}
	cout << c<<"\n";
}