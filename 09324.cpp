#include <iostream>
#include <string>
using namespace std;
int main() {
    int a;
    cin >> a;
    while (a--) {
        string b;
        cin >> b;
        int cnt[30] = { 0, };
        bool test = false;
        for (int i = 0; i < b.length(); i++) {
            int com = b[i] - 'A';
            cnt[com]++;
            if (cnt[com] == 3) {
                if (b[i + 1] != b[i]) {
                    cout << "FAKE\n";
                    test = true;
                    break;
                }
                else {
                    cnt[com] = 0;
                    i++;
                }
            }
        }
        if (test) {
            continue;
        }
        else {
            cout << "OK\n";
        }
    }
}