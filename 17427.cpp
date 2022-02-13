#include <iostream>
using namespace std;
int main(){
    long long a;
    cin>>a;
    long long b=0;
    for(int i=1;i<=a;i++){
        b+=i*(a/i);
    }
    cout<<b<<"\n";
}