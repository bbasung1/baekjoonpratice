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
    int d;
    cin>>d;
    int c=count(b,b+a,d);
    cout<<c<<"\n";
}