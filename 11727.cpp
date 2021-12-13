#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
    long long a;
    cin >> a;
    if(a==1){
        cout<<1<<"\n";
    }
    else if(a==2){
        cout<<3<<"\n";
    }
    else{
    long long* b = new long long[a + 1];
    b[1] = 1,b[2]=3;
    for(int i=3;i<=a;i++){
        b[i]=(2*b[i-2]+b[i-1])%10007;
    }
    cout<<b[a]<<"\n";
    }
}