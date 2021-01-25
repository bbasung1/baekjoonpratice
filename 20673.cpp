#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    if(a<=50&&b<=10){
        cout<<"White"<<endl;
    }
    else if(b>=30){
        cout<<"Red"<<endl;
    }
    else{
        cout<<"Yellow"<<endl;
    }
}