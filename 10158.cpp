#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int g=((c+e)/a)%2?a-(c+e)%a:(c+e)%a;
    int f=((d+e)/b)%2?b-(d+e)%b:(d+e)%b;
    cout<<g<<" "<<f<<"\n";
}