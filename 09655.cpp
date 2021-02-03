#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    b=a/3+a%3;
    if(b%2==0){
        cout<<"CY";
    }
    else{
        cout<<"SK";
    }
}