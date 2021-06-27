#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	long long res = 0;
	int a;
	cin >> a;
	int** b = new int* [a];
	for (int i = 0; i < a; i++) {
		b[i] = new int[a];
		for (int j = 0; j <= i; j++) {
			cin >> b[i][j];
		}
	}
	res = b[0][0];
	int pos = 0;
	for (int i = 1; i < a; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0) {
				b[i][j] += b[i - 1][j];
			}
			else if (i == j) {
				b[i][j] += b[i - 1][j - 1];
			}
			else {
				b[i][j] += max(b[i - 1][j - 1], b[i - 1] [j]);
			}
		}
	}
	cout << *max_element(b[a - 1], b[a - 1] + a) << "\n";
}