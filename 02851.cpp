#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a=100;
    int b[10];
    int c=0;
    int d=0;
    for(int i=0;i<10;i++){
        cin>>b[i];
    }
    for(int i=0;i<10;i++){
        c+=b[i];
        if((abs(c-100)<a)||(abs(c-100)==a&&d<c)){
            a=abs(c-100);
            d=c;
        }
        else if(abs(c-100)>a){
            break;
        }
    }
    cout<<d<<"\n";
    }