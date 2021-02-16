#include <iostream>
using namespace std;
int p(int k,int n){
        if(n==1)
                return 1;
        if(k==0)
                return n;
        return(p(k-1,n)+p(k,n-1));
}
int main(){
        int a;
        cin>>a;
        for(a;a>0;a--){
                int b,c;
                cin>>b>>c;
                cout<<p(b,c)<<"\n";
        }
}
