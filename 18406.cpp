#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    cin>>a;
    int s1=0,s2=0;
    for(int i=0;i<a.length()/2;i++){
        s1+=a[i]-'0';
        s2+=a[(a.length()-1)-i]-'0';
    }
    s1==s2?cout<<"LUCKY\n":cout<<"READY\n";
}