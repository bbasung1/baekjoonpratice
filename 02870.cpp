#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int a;
    cin>>a;
        vector<string>c;
    while(a--){
        string b;
        cin>>b;
        string tmp;
        for(auto i:b){
            if(i>='0'&&i<='9'){
                tmp+=i;
            }
            else if(!tmp.empty()){
                bool d=1;
                for(int j=0;j<tmp.size();j++){
                    if(tmp[j]!='0'){
                        c.push_back(tmp.substr(j));
                        d=0;
                        break;
                    }
                }
                if(d){
                    c.push_back("0");
                }
                tmp="";
                }
        }
        if(!tmp.empty()){
            bool d=1;
            for(int j=0;j<tmp.size();j++){
                if(tmp[j]!='0'){
                    c.push_back(tmp.substr(j));
                    d=0;
                    break;
                }
            }
            if(d){
                c.push_back("0");
            }
        }
    }
    sort(c.begin(),c.end(),[](const string &a,const string &b){if(a.size()==b.size()){return a<b;}return a.size()<b.size();});
    for(auto i:c){
        cout<<i<<"\n";
    }
}