#include <algorithm>
#include <string>
#include <iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    int cur=a.find('.');
    int before=0;
    while(cur!=string::npos){
        if((cur-before)%2!=0){
            cout<<"-1\n";
            return 0;
        }
        int tmp=cur-before;
        int i=0;
        for(;tmp%4==0;i+=4){
            a.replace(before+i,4,"A");
        }
        a.replace(before+i,2,"B");
        before=cur;
        cur=a.find(before+1,'.');
    }
    cout<<a<<"\n";
}