#include <iostream>
using namespace std;
int main(){
    int a=1;
    int b;
    cin>>b;
    for(int i=0;i<b;i++){
        int c,d;
        cin>>c>>d;
        if(c==a){
            a=d;
        }
        else if(d==a){
            a=c;
        }
    }
    if(a<=3){
        cout<<a<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
}