#include <iostream>
using namespace std;
int main(){
    int a,b;
    long long c=0;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>b;
        c+=b;
    }
    if(c%3==0){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}