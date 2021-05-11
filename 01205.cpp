#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,a,p;
    cin>>n>>a>>p;
    int *b=new int[n+1];
    b[0]=a;
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }
    sort(b,b+n+1);
    int c=find(b,b+n+1,a)-b+1;
    if(c<=p&&c<0){
        cout<<c<<"\n";
    }
    else{
        cout<<"-1\n";
    }
}