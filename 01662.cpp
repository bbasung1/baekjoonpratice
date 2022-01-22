#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string a;
    cin>>a;
    int cur=0;
    stack<int>plus;
    stack<int>mul;
    while(a.find('(',cur)!=string::npos){
        int tmp=a.find('(',cur);
        string tmp1=a.substr(tmp-1,1);
        if(a[tmp+1]==')'){
            mul.push(stoi(tmp1));
            plus.push(0);
            cur=tmp+2;
            continue;
        }
        string tmp2=a.substr(cur,(tmp-1)-cur);
        mul.push(stoi(tmp1));
        plus.push(tmp2.size());
        cur=tmp+1;
    }
    if(a.find(')')==string::npos){
        cout<<a.size();
        return 0;
    }
    int cl=a.find(')',cur);
    string t2=a.substr(cur,cl-cur);
    cout<<t2<<"\n";
    int res=t2.size();
    //cout<<"1단계 검증\n";
    while(!mul.empty()){
        cout<<mul.top()<<" "<<plus.top()<<"\n";
        res*=mul.top();
        res+=plus.top();
        //cout<<res<<"\n";
        mul.pop();
        plus.pop();
    }
    cout<<res<<"\n";
}