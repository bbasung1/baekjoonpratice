#include <iostream>
using namespace std;
int main(){
    int a[4];
    cin>>a[0]>>a[1]>>a[2];
    a[3]=(a[0]+a[1])/a[2];
    int b=(a[0]+a[1])/a[2];
    while(a[3]>=a[2]){
        a[3]-=(a[2]-1);
        b++;
    }
    cout<<b<<endl;
}