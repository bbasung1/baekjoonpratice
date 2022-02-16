#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main(){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        unordered_map<long long,int>c;
        for(int i=0;i<b;i++){
            long long d;
            cin>>d;
            c[d]++;
        }
        long long cur=0;
        bool pass=0;
        for(auto &i:c){
            if(i.second>b/2){
                cur=i.first;
                pass=1;
                break;
            }
        }
        if(pass){
            cout<<cur<<"\n";
        }else{
            cout<<"SYJKGW\n";
        }
    }
}