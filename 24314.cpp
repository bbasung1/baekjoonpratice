#include <iostream>
using namespace std;
int main(){
    int a1,a0;
    cin>>a1>>a0;
    int c;
    cin>>c;
    int n0;
    cin>>n0;
    //cout<<a0/(a1-c)<<"\n";
    if(n0>=-(a0/(a1-c))){
        cout<<"1\n";
    }else{
        cout<<"0\n";
    }
}