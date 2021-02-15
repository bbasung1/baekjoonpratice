#include <iostream>
#include <string>
using namespace std;
int main(){
    while(1){
        string a;
        cin>>a;
        if(a=="#"){
            break;
        }
        for(int i=a.length()-1;i>=0;i--){
            cout<<a[i];
        }
        cout<<" ";
    }
}