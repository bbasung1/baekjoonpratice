#include <iostream>
#include <string>
using namespace std;
int main(){
    short a;
    short d=0;
    cin>>a;
    while(a--){
    bool b[26]={0};
        string c;
        cin>>c;
        for(int i=0;i<c.length();i++){
            if(i==0){
                b[c[i]-'a']=1;
                continue;
            }
            if((c[i-1]!=c[i])&&b[c[i]-'a']!=0){
                d--;
                break;
            }
            else if(b[c[i]-'a']==0){
                b[c[i]-'a']=1;
            }
        }
        d++;
    //cout<<d<<"\n";
    }
    cout<<d<<"\n";
}