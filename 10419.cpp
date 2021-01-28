#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        int b=sqrt(a);
        if(b*(1+b)>a){
            b--;
        }
        cout<<b<<endl;
    }
}