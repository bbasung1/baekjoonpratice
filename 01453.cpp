#include <iostream>
using namespace std;
int main(){
    int a[101]={0};
    int b;
    cin>>b;
    int sum=0;
    while(b--){
        int c;
        cin>>c;
        //cout<<a[c]<<"\n";
        if(a[c]==0){
            a[c]=1;
        }
        else{
            sum++;
        }
    }
    cout<<sum<<"\n";
}