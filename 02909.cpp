#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int c=round(pow(10,b));
    if(b==0){
        cout<<a<<"\n";
    }
    else{
    cout<<(a%c<c/2?(a/c)*c:(a/c+1)*c)<<"\n";
    }
}