#include <algorithm>
#include <string>
#include <iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    int cur=a.find('.');
    int before=0;
    while(true){
        cur=a.find('.',before);
        if(cur==-1){
            cur=a.size();
        }
        if((cur-before)%2!=0){
            cout<<"-1\n";
            return 0;
        }
        int tmp=cur-before;
        int i=0;
        for(;tmp>=4;i+=4){
            a.replace(before+i,4,"AAAA");
            tmp-=4;
        }
        if(tmp==2){
        a.replace(before+i,2,"BB");
        }
        if(cur==a.size()){
            break;
        }
        before=cur+1;
        cur=a.find(before+1,'.');
    }
    cout<<a<<"\n";
}