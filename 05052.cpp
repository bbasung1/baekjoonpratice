#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <iostream>
using namespace std;
int main(){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        vector<string>c(b,"");
        map<string,int>d;
        for(int i=0;i<b;i++){
            cin>>c[i];
            d.insert({c[i],i});
        }
        bool pass=1;
        for(int i=0;i<c.size();i++){
            if(c[i].length()==0){
                continue;
            }
            for(int j=1;j<c[i].length();j++){
                if(d.find(c[i].substr(0,j))!=d.end()){
                    cout<<"NO\n";
                    pass=0;
                    break;
                }
            }
            if(!pass){
                break;
            }
        }
        if(pass){
            cout<<"YES\n";
        }
    }
}