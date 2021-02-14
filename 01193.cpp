#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    //cout<<a<<"\n";
    int n=0;
    do{
        n++;
    }while(a>n*(n+1)/2);
    int k=(n*(n+1)/2)-a;
    if(n%2==0){
        cout<<n-k<<"/"<<k+1<<"\n";
    }
    else{
        cout<<k+1<<"/"<<n-k<<"\n";
    }
}