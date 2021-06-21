#include <deque>
#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    deque <int> a;
    int b;
    cin >> b;
    cin.ignore();
    while (b--) {
        string c;
        getline(cin, c);
        if (c == "size")
            cout << a.size() << "\n";
        else if (c == "empty") {
            a.empty() ? cout << "1\n" : cout << "0\n";
        }
        else if (c == "front") {
            a.empty() ? cout << "-1\n" : cout << a.front() << "\n";
        }
        else if (c == "back") {
            a.empty() ? cout << "-1\n" : cout << a.back() << "\n";
        }
        else if (c == "pop_front") {
            if (a.empty()) {
                cout << "-1\n";
            }
            else {
                cout << a.front() << "\n";
                a.pop_front();
            }
        }
        else if (c == "pop_back") {
            if (a.empty()) {
                cout << "-1\n";
            }
            else {
                cout << a.back() << "\n";
                a.pop_back();
            }
        }
        else if (c[5] == 'f') {
            a.push_front(stoi(c.substr(11)));
        }
        else {
            a.push_back(stoi(c.substr(10)));
        }
    }
}