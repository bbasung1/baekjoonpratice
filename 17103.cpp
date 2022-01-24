#include <string>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
            int cnt=0;
        vector<bool>c(b+1,1);
        vector<int>d;
        c[1]=0;
        for(int i=2;i<=sqrt(b);i++){
            if(!c[i]){
                continue;
            }
            for(int j=2*i;j<=b;j+=i){
                c[j]=0;
            }
            d.push_back(i);
        }
        //cout<<"\n";
        for(auto i:d){
            if(c[i]&&c[b-i]){
                cnt++;
            }
        }
            cout<<cnt<<"\n";
    }
}