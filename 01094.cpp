#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b=0;
    for(int c=64;c>1;c/=2){
        if(a-c<0){
            continue;
        }
        a-=c;
        b++;
    }
    if(a==1){
        b++;
    }
    cout<<b;
}