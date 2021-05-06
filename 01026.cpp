#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a[50],b[50];
    int c;
    cin>>c;
    for(int i=0;i<c;i++){
        cin>>a[i];
    }
        for(int i=0;i<c;i++){
        cin>>b[i];
    }
    sort(a,a+c);
    sort(b,b+c,greater<int>());
    long long d=0;
            for(int i=0;i<c;i++){
        d+=b[i]*a[i];
    }
    cout<<d<<"\n";
}