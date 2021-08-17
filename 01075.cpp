#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    int b,c;
    cin>>a>>b;
    a=a.substr(0,a.size()-2);
    a+="00";
    //cout<<a<<"\n";
    c=stoi(a);
    if(c%b==0){
        cout<<"00\n";
    }
    else{
        int d=b-(c%b);
        if(d<=9){
            cout<<"0"<<d<<"\n";
        }
        else{
            cout<<d<<"\n";
        }
    }
}