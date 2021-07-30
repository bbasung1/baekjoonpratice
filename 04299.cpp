#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a-b<0||(a-b)%2!=0){
        cout<<"-1\n";
    }
    else{
        int c=(a+b)/2;
        int d=a-c;
        cout<<max(c,d)<<" "<<min(c,d)<<"\n";
    }
}