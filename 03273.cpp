#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long long a;
    cin>>a;
    long long *b=new long long[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    long long c;
    cin>>c;
    sort(b,b+a);
    long long start=0,end=a-1;
    long long ans=0;
    while(start<end){
        long long d;
        if(b[start]+b[end]==c){
            ans++;
            start++;
            end--;
        }
        else if(b[start]+b[end]>c){
            end--;
        }
        else{
            start++;
        }
    }
    cout<<ans<<"\n";
}