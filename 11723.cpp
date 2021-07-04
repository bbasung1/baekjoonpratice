#include <iostream>
#include <set>
#include <string>
using namespace std;
int main(){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    set<int>a;
    set<int>a1={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int b;
    cin>>b;
    cin.ignore();
    while(b--){
        string c;
        getline(cin,c);
        if(c=="all"){
            a=a1;
        }
        else if(c=="empty"){
            a.clear();
        }
    else if(c[0]=='a'){
        a.insert(stoi(c.substr(4)));
    }
    else if(c[0]=='r'){
        a.erase(stoi(c.substr(7)));
    }
    else if(c[0]=='c'){
        cout<<a.count(stoi(c.substr(6)))<<"\n";
    }
    else{
        if(a.count(stoi(c.substr(7)))==1){
            a.erase(stoi(c.substr(7)));
        }
        else{
            a.insert(stoi(c.substr(7)));
        }
    }
    }
}