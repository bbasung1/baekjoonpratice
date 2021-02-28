#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b=0,c;
    for(int i=0;i<a;i++){
        int j,m;
        cin>>j>>m;
        int l=((((j-1)-((j-1)%(m+1)))/(1+m))+1)*2;
        if(i==0||l<c){
            b=1+i;
            c=l;
        }
    }
    cout<<b<<" "<<c<<"\n";
}