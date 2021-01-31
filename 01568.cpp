#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b=1;
    int c=1;
    while(1){
        if((a-b)<0){
            b=1;
        }
        if(a==0){
            break;
        }
        a-=b;
        b++;
        c++;
    }
    cout<<c-1<<endl;
}