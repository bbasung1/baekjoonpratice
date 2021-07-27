#include <map>
#include <algorithm>
#include <iostream>
using namespace std;
int main() {
	map<string, int> map;
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		string b;
		cin >> b;
		map[b.substr(b.find('.')+1)]++;
		/*if (map.find(b.substr(b.find('.'))) != map.end()) {
			map[b.substr(b.find('.'))] = 0;
		}
		else {

			map[b.substr(b.find('.'))]++;

		}*/
	}
	for (auto iter : map) {
		cout << iter.first << " " << iter.second << "\n";
	}
}