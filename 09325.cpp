#include <iostream>
using namespace std;
int main(){
    int a;
    cin.tie(0);cout.tie(0);::ios::sync_with_stdio(0);
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        int c;
        cin>>c;
        while(c--){
            int d,e;
            cin>>d>>e;
            b+=d*e;
        }
        cout<<b<<"\n";
    }
}