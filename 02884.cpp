#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    b-=45;
    if(b<0){
        b+=60;
        a--;
    }
    if(a<0){
        a+=24;
    }
    printf("%d %d\n",a,b);
}