#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int plus[10000001]={0};
    int minus[10000001]={0};
    //cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int k;
        cin>>k;
        k<0?minus[-k]++:plus[k]++;
    }
    int c;
    cin>>c;
        for(int i=0;i<c;i++){
            int d;
            cin>>d;
            cout<<(d<0?minus[-d]:plus[d])<<" ";
    }
    cout<<"\n";
}