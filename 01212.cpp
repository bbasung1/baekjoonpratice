#include <iostream>
#include <string>
using namespace std;
int main(){
    string a[8]={"","1","10","11","100","101","110","111"};
    string b[8]={"000","001","010","011","100","101","110","111"};
    string c;
    cin>>c;
    cout<<a[c[0]-'0'];
    for(int i=1;i<c.length();i++){
        cout<<b[c[i]-'0'];
    }
    if(c=="0"){
        cout<<0;
    }
    cout<<"\n";
}