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
                if(tmp[0]!='0'){
                    cout<<tmp<<"n\n";
                    c.push_back(tmp);
                }else{
                    tmp.erase(remove(tmp.begin(),tmp.end(),'0'),tmp.end());
                    cout<<tmp<<"k\n";
                    if(tmp.empty()){
                        c.push_back("0");
                    }else{
                    c.push_back(tmp);
                    }
                }
                    tmp.clear();
                }
        }
        if(!tmp.empty()){
            if(tmp[0]!='0'){
                    cout<<tmp<<"n\n";
                    c.push_back(tmp);
                }else{
                    tmp.erase(remove(tmp.begin(),tmp.end(),'0'),tmp.end());
                    cout<<tmp<<"k\n";
                    if(tmp.empty()){
                        c.push_back("0");
                    }else{
                    c.push_back(tmp);
                    }
                }
                    tmp.clear();
                }
    }
    sort(c.begin(),c.end());
    for(auto i:c){
        cout<<i<<"\n";
    }
}