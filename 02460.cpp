#include <iostream>
using namespace std;
int main(){
    int a,b,c=0,d=0;
    for(int i=0;i<10;i++){
        cin>>a>>b;
        c=c-a+b;
        if(c>d){
            d=c;
        }
    }
    cout<<d<<"\n";
}