#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c,d,e,f;
    int c1,c2;
    cin>>a>>b;
    cin>>c>>d;
    cin>>e>>f;
    c1=sqrt(pow(a-e,2)+pow(b-f,2));
    c2=abs(c-e)+abs(d-f);
    if(c1<c2){
        cout<<"bessie\n";
    }
    else if(c1>c2){
        cout<<"daisy\n";
    }
    else{
        cout<<"tie\n";
    }
}