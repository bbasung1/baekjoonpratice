#include<iostream>
#include <string>
using namespace std;
int main() {
    string a;
    while ((cin>>a)&&a!="0") {
        while (true) {
            long long b = 0;
            for (char& c : a) {
                b += c - '0';
            }
            if (b < 10) {
                cout << b<<"\n";
                break;
            }
            else {
                a = to_string(b);
            }
        }
    }
}