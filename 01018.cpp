#include <iostream>
#include <vector>
using namespace std;
int main() {
	int  n, m;
	cin >> n >> m;
	vector <string> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int min = 100;
	
	for (int i = 0; i < n - 7; i++) {
		for (int j = 0; j < m - 7; j++) {
			int b = 0;
			int w = 0;
			for (int x = i; x < i + 8; x++) {
				for (int y = j; y < j + 8; y++) {
					if ((x + y) % 2 == 0) {
						if (a[x][y] == 'B') {
							w++;
						}
						else {
							b++;
						}
					}
					else {
						if (a[x][y] == 'B') {
							b++;
						}
						else {
							w++;
						}
					}
				}
			}
					min = min < b ? min : b;
					min = min < w ?min:w;
		}
	}
	cout << min << "\n";
}