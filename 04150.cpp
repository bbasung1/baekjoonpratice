#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

string sum(string x, string y)
{
	int num;
	int carry = 0;
	string result;

	reverse(x.begin(), x.end());
	reverse(y.begin(), y.end());

	while (x.length() < y.length()) {
		x += '0';
	}
	while (x.length() > y.length()) {
		y += '0';
	}

	for (int i = 0; i < x.length(); ++i) {
		num = (x[i] - '0' + y[i] - '0' + carry) % 10;
		result += to_string(num);
		carry = (x[i] - '0' + y[i] - '0' + carry) / 10;
	}
	if (carry != 0) {
		result += to_string(carry);
	}

	reverse(result.begin(), result.end());

	return result;
}

int main(int argc, char* argv[])
{
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
	int k;
	string a = "0", b = "1", c;
	cin >> k;
	for (int i = 0; i < k; i++) {
		c = sum(a, b);
		a = b;
		b = c;
	}
	cout << a << "\n";
}