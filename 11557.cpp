#include <iostream>
#include <string>
using namespace std;
int main() {
    int a;
    cin >> a;
    while (a--) {
        int b;
        cin >> b;
        string c;
        int d = -1;
        while (b--) {
            string e;
            int f;
            cin >> e >> f;
            if (d < f) {
                c = e;
                d = f;
            }
        }
        cout << c << "\n";
    }
}