#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    int i=1;
    cin.tie(0);cout.tie(0);::ios::sync_with_stdio(0);
    while(1){
        cin>>a>>b>>c;
        if(a==0&&b==0&&c==0){
            return 0;
        }
        cout<<"Case "<<i<<": "<<(c/b)*a+((c%b)>a?a:c%b)<<"\n";
    i++;
    }
}