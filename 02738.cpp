#include <iostream>
#include <vector>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	vector <vector <int>>c(a, vector<int>(b, 0));
	vector <vector <int>>d(a, vector<int>(b, 0));
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> c[i][j];
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> d[i][j];
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << c[i][j]+d[i][j]<<" ";
		}
		cout << "\n";
	}
}