#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a[2000000];
    int b,c;
    cin>>b>>c;
    int d=b+c;
    for(int i=0;i<d;i++){
        cin>>a[i];
    }
    sort(a,a+d);
    for(int i=0;i<d;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}