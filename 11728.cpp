#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int b,c;
cin.tie(0);
cout.tie(0);
ios::sync_with_stdio(0);
    cin>>b>>c;
    int d=b+c;
    int *a=new int[d];
    for(int i=0;i<d;i++){
        cin>>a[i];
    }
    sort(a,a+d);
    for(int i=0;i<d;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    delete []a;
}