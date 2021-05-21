#include <iostream>
#include <string>
using namespace std;

string summary(string& a, string& b) {
	string s = "";
	int alen = a.length() - 1;
	int blen = b.length() - 1;
	int carry = 0;
	while (alen >= 0 || blen >= 0) {
		int total;
		int result;
		bool test = (alen >= 0 && blen >= 0);
		if (alen < 0)total = b[blen] - '0' + carry;
		else if (blen < 0)total = a[alen] - '0' + carry;
		else total = a[alen] - '0' + b[blen] - '0' + carry;
		carry = total / 10;
		result = total % 10;
		char cg = result + '0';
		s = cg+s;
		alen--;
		blen--;
	}
	char cg = carry + '0';
	if (carry != 0)s = cg+s;
	return s;
}




int main() {
	string a, b;
	cin >> a >> b;
	string s;

	s = summary(a, b);
	cout << s << "\n";

}