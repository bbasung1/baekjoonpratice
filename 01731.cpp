#include <iostream>
using namespace std;
int main(){
    int n;
    int c;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(2*a[1]==a[0]+a[2]){
        c=a[1]-a[0];
        cout<<a[n-1]+c<<endl;
    }
    else if(a[1]*a[1]==a[0]*a[2]){
        c=a[1]/a[0];
        cout<<a[n-1]*c<<endl;
    }
}