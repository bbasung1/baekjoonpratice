#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(b<=2){
        cout<<"NEWBIE!\n";
    }
    else if(b<=a){
        cout<<"OLDBIE!\n";
    }
    else{
        cout<<"TLE!\n";
    }
}