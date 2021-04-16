#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    int a;
    cin>>a;
    while(a--){
        int b[10];
        for(int i=0;i<10;i++){
            cin>>b[i];
        }
        sort(b,b+10);
        cout<<b[7]<<"\n";
    }
}