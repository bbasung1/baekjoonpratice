#include<iostream>
#include<map>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    map <string,int>m;
    int a;
    cin>>a;
    while(a--){
        string b;
        cin>>b;
        if(m.find(b)==m.end()){
            m[b]=0;
        }
        else{
            m[b]++;
        }
    }
    auto best=max_element(m.begin(),m.end(),[](const pair<string,int>& a, const pair<string,int>& b)->bool{return a.second<b.second;});
    cout<<best->first<<"\n";
}