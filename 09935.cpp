#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    int asize=a.size();
    for(int i=0;i<asize;i++){
    bool tmp=1;
        for(int j=0;j<b.size();j++){
            if(a[i+j]!=b[j]){
                tmp=0;
                break;
            }
        }
        if(tmp){
            a=a.substr(0,i)+a.substr(i+b.size());
            if(i>=1+b.size()){
                i-=b.size();
            }else{
                i=-1;
            }
            asize=a.size();
        }
    }
    if(a.empty()){
        cout<<"FRULA\n";
    }else{
        cout<<a<<"\n";
    }
}