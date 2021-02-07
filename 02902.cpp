#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    cin>>a;
    cout<<a[0];
    for(int i=1;i<a.length()-1;i++){
        if(a[i]=='-'){
            cout<<a[i+1];
        }
    }
    cout<<endl;
}