#include <iostream>
#include <algorithm>
using namespace std;
void cnt(long long a,long long &b,int c){
    while(a>=c){
        b+=a/c;
        a/=c;
    }
}
int main(){
    long long a,b;
    cin>>a>>b;
    long long a5=0,b5=0,a2=0,b2=0;
    if(a==b||b==0){
        cout<<0<<"\n";
        return 0;
    }
    cnt(a,a2,2);
    cnt(b,b2,2);
    cnt(a-b,b2,2);
    cnt(a,a5,5);
    cnt(b,b5,5);
    cnt(a-b,b5,5);
    cout<<min((a5-b5),(a2-b2));
}