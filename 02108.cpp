#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
    int a;
    cin.tie();cout.tie();ios::sync_with_stdio(0);
    cin >> a;
    int* b = new int[a];
    int c[8001] = { 0, };
    double sum=0;
    for (int i = 0; i < a; i++) {
        cin >> b[i];
        sum+=b[i];
        c[b[i] + 4000]++;
    }
    sort(b, b + a);
    int m1 = max_element(c, c + 8001) - c;
    if (*max_element(c + m1 + 1, c + 8001) == c[m1]) {
        m1 = max_element(c + m1 + 1, c + 8001) - c;
    }
    cout<<round(sum/a)<<"\n";
    cout<<b[a/2]<<"\n";
    cout << m1-4000<<"\n";
    cout<<b[a-1]-b[0]<<"\n";

}