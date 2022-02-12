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
        bool ck=0;
        bool ch=0;
        for(auto i:b){
            if(i>='1'&&i<='9'){
                tmp+=i;
                ck=1;
            }else if(i=='0'){
                    ch=1;
                if(ck){
                    tmp+=i;
                }
            }
            else if(!tmp.empty()){
                    c.push_back(tmp);
                    tmp.clear();
                    ck=0;ck=0;
                }
            else if(ch){
                c.push_back("0");
            }
        };
        if(!tmp.empty()){
            c.push_back(tmp);
        }else if(ch){
            c.push_back("0");
        }
    }
    sort(c.begin(),c.end());
    for(auto i:c){
        cout<<i<<"\n";
    }
}