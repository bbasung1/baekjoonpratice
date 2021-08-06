#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
	int b;
	cin >> b;
	int* c = new int[b];
	for (int i = 0; i < b; i++) {
		cin >> c[i];
		//a.push_back(c[i]);
	}
	vector <int> a(c,c+b);
	sort(a.begin(), a.end());
	a.erase(unique(a. begin(), a.end()), a.end());
	for (int i = 0; i < b; i++) {
		cout <<lower_bound(a.begin(),a.end(),c[i])-a.begin() << " ";
	}
}