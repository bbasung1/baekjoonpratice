#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    int a;
    cin>>a;
    while(a--){
        long long b;
        cin>>b;
        if(b<=1){
            cout<<"2\n";
            continue;
        }
        for(b;;b++){
        bool c=true;
            for(long long i=2;i<=sqrt(b);i++){
                if(b%i==0){
                    c=false;
                    break;
                }
            }
            if(c){
                cout<<b<<"\n";
                break;
            }
        }
    }
}