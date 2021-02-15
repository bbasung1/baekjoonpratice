#include <iostream>
#include <string>
using namespace std;
int main(){
    long long mul=1;
    int s[10]={0};
    for(int i=0;i<3;i++){
        int a;
        cin>>a;
        mul*=a;
    }
    string b=to_string(mul);
    for(char &c:b){
        int d=c-'0';
        s[d]++;
    }
    for(int i=0;i<10;i++){
        cout<<s[i]<<"\n";
    }
}