#include <iostream>
#include <algorithm>
using namespace std;
bool cop(int* m, int* n) {
    return m[0] < n[0];
}
int main() {
    int a;
    int res = 0;
    int last = 0;
    cin >> a;
    int** b = new int* [a];
    for (int i = 0; i < a; i++) {
        b[i] = new int[2];
        cin >> res >> b[i][0] >> last >> b[i][1];
        b[i][0] += 100 * res; b[i][1] += 100 * last;
        if (b[i][0] < 301) {
            b[i][0] = 301;
        }
        if (b[i][1] > 1130) {
            b[i][1] = 1201;
        }
    }
    sort(b, b + a,cop);
    res = 0; last = 301;
    int fir = 300, maxend = 0;
    for (int i = 0; i < a; i++) {
        if (b[i][0] > fir && b[i][0] <= last) {
            if (maxend < b[i][1]) {
                maxend = b[i][1];
            }
            if (b[i][1] == 1201) {
                ++res;
                last = maxend;
                break;
            }
            continue;
        }
        else {
            if (last >= maxend) {
                break;
            }
            ++res;
            fir = last;
            last = maxend;
            --i;
        }
    }
    //cout<<last<<"\n";
    last == 1201 ? cout << res << "\n" : cout << "0\n";
    delete[]b;
}