#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    for(char &b:a){
        if((b>='a'&&b<='m')||(b>='A'&&b<='M')){
            b+=13;
        }
        else if((b>='n'&&b<='z')||(b>='N'&&b<='Z')){
            b-=13;
        }
    }
    cout<<a<<"\n";
}