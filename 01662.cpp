#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string a;
    cin>>a;
    int cnt=0;
    stack<int>plus;
    stack<int>mul;
    int res=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='('){
            cnt-=1;
            int tmp1=stoi(a.substr(i-1,1));
            mul.push(tmp1);
            plus.push(cnt);
            cnt=0;
        }else if(a[i]==')'){
            int tmp2=mul.top();
            mul.pop();
            tmp2*=cnt;
            int p=plus.top();
            plus.pop();
            cnt=p+tmp2;
        }
        else{
            cnt++;
        }
        //cout<<cnt<<"\n";
    }
    cout<<cnt<<"\n";
}