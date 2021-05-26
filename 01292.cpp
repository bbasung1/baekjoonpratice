#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int count=1;
    int stack=0;
    int a=0;
    for(;stack+count<n-1;count++){
        stack+=count;
        a+=count*count;
    }
    a+=count*(n-1-stack);
    count=1;
    stack=0;
    int b=0;
        for(;stack+count<m;count++){
        stack+=count;
        b+=count*count;
    }
    b+=count*(m-stack);
    cout<<b-a<<"\n";
}