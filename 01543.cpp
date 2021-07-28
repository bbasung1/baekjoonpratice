#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    string a, b;
    getline(cin, a);
    getline(cin, b);
    long long c = 0;
    while (a.find(b) != string::npos) {
        c++;
        a = a.substr(a.find(b) + b.length());
    }
    cout << c << "\n";
}