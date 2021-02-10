#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b=0;
    for(int i=0;i<a;i++){
        int c;
        cin>>c;
        b+=(c-1);
    }
    b++;
    cout<<b<<"\n";
}