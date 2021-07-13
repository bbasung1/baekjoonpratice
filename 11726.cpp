#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
    long long a;
    cin >> a;
    if(a<=2){
        cout<<a<<"\n";
    }
    else{
    long long* b = new long long[a + 1];
    b[1] = 1,b[2]=2;
    for(int i=3;i<=a;i++){
        b[i]=(b[i-2]+b[i-1])%10007;
    }
    cout<<b[a]<<"\n";
    }
}