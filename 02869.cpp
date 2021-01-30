#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int d=(c-b)/(a-b);
    if((c-a)%(a-b)!=0){
        d++;
    }
    cout<<d<<endl;
}