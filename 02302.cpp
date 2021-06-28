#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	long long a, b = 0;
	long long e = 1;
	cin >> a;
	int c[5];
	for (int n = 1; n <= a;n++) {
		for (int i = 0; i < 5; i++) {
			cin >> c[i];
		}
		for (int i = 0; i < 5; i++) {
			for (int j=i+1; j < 5; j++) {
				for (int k = j+1; k < 5; k++) {
					long long d = (c[i] + c[j] + c[k])%10;
					if (b <= d) {
						b = d;
						e = n;
					}
				}
			}
		}
	}
	cout << e << "\n";
}