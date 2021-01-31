#include <iostream>
using namespace std;
int main(){
    int a[4];
    cin>>a[0]>>a[1]>>a[2];
    a[3]=(a[0]+a[1]);
    int b=0;
    while(a[3]>=a[2]){
        b+=a[3]/a[2];
        a[3]=a[3]/a[2]+a[3]%a[2];
    }
    cout<<b<<endl;
}