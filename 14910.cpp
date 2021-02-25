#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    while(scanf("%d",&b)!=EOF){
        if(b<a){
            cout<<"Bad\n";
            return 0;
        }
        a=b;
    }
    cout<<"Good\n";
}