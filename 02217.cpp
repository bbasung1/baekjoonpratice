#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a;
    cin>>a;
    int *b=new int[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    sort(b,b+a);
    int sum=0;
    for(int i=0;i<a;i++){
        int c=b[i]*(a-i);
        if(c>sum){
            sum=c;
        }
    }
    cout<<sum<<"\n";
}