#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
	long long a,count=0;
	cin >> a;
	while (a>=5) {
		count += a / 5;
		a /= 5;
	}
	cout << count << "\n";
}