#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    int a;
    cin>>a;
    int *b=new int[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    int c;
    cin>>c;
        for(int i=0;i<c;i++){
            int d;
            cin>>d;
            cout<<count(b,b+a,d)<<" ";
    }
    cout<<"\n";
}