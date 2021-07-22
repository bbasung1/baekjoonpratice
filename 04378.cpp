#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main() {
	string a = "`1234567890-QWERTYUIOP[]ASDFGHJKL;ZXCVBNM,. ";
	string b = "1234567890-=WERTYUIOP[]\\SDFGHJKL;'XCVBNM,./ ";
	string c;
	while ((getline(cin, c))&&!cin.eof()) {
		for (char& i : c) {
			cout << a[b.find(i)];
		}
		cout << "\n";
	}
}